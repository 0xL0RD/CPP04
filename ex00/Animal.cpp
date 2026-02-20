/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:21:23 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 16:02:31 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::class_name = "Animal";

Animal::Animal(void)
	:	_type("undefined")
{
	std::cout << "Default constructor: " << __FUNCTION__
		<< std::endl;
	return ;
}

Animal::Animal(const Animal	&other)
{
	std::cout << "Copy constructor: " << __FUNCTION__
		<< std::endl;
	*this = other;
}

Animal::~Animal(void)
{
	std::cout << "Copy constructor: " << __FUNCTION__
		<< std::endl;
	return ;
}

Animal&	Animal::operator=(const Animal &other)
{
	this->_type = other._type;
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal: " << __FUNCTION__
		<< std::endl;
	return ;
}
