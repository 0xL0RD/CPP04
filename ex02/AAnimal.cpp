/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAninmal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:21:23 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 15:58:39 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

std::string	AAnimal::_class_name = "AAnimal";
std::string	AAnimal::_sound = "enjoy the silence";

AAnimal::AAnimal(void)
	:	_type("undefined")
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor"
		<< " type: " << this->_type
		<< std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal	&other)
{
	*this = other;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Copy constructor"
		<< " type: " << this->_type
		<< std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor"
		<< std::endl;
	return ;
}

AAnimal&	AAnimal::operator=(const AAnimal &other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator=; type: " << this->_type 
		<< std::endl;
	return (*this);
}

std::string		AAnimal::getType(void) const
{
	return (this->_type);
}
