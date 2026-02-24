/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 07:09:17 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 09:30:41 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


std::string	Ice::_class_name = __FILE__;
std::string	Ice::_class_type = "ice";

Ice::Ice(void)
	//:	_type("ice");
	:	AMateria(_class_type)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor" << " type: " << this->_type << std::endl;
	return ;
}

Ice::Ice(const Ice &other)
	:	AMateria(other)
{
	//this->operator=(other);
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor" << " type: " << this->_type << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor" << std::endl;
	return ;
}


Ice& Ice::operator=(const Ice &other)
{
	if (this == &other)
		return (*this);
	this->AMateria::operator=(other);
	//this->_type = other._type;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Operator=" << " Type: " << this->_type << std::endl;
	return (*this);
}


AMateria* Ice::clone(void) const
{
	Ice	*new_ice = new Ice(*this);
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "clone" << " Type: " << this->_type << std::endl;
	//if (new_ice != NULL)
		//this->addHistory(*new_ice);
	return (new_ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

