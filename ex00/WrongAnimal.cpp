/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:21:23 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 18:31:16 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string	WrongAnimal::_class_name = "WrongAnimal";
std::string	WrongAnimal::_sound = "undefined";

WrongAnimal::WrongAnimal(void)
	:	_type("undefined")
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor"
		<< " type: " << this->_type
		<< std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal	&other)
{
	*this = other;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Copy constructor"
		<< " type: " << this->_type
		<< std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Desconstructor"
		<< std::endl;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &other)
{
	this->_type = other._type;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator=; type: " << this->_type 
		<< std::endl;
	return (*this);
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Sound: =/()$&(/(·&/@@#"
		<< std::endl;
	return ;
}
