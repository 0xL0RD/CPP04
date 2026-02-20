/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:38:13 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 19:00:35 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

std::string	WrongCat::_class_name = "WrongCat";
std::string	WrongCat::_sound = "@#½@ woem #@¬#";

WrongCat::WrongCat(void)
{
	this->_type = this->_class_name;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor"
		<< " type: " << this->_type
		<< std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &other)
{
	Animal	*a = this;
	*a = other;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Copy constructor"
		<< " type: " << this->_type
		<< std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Desconstructor"
		<< std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &other)
{
	this->_type = other._type;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator=; type: " << this->_type 
		<< std::endl;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< this->_sound
		<< std::endl;
	return ;

}
