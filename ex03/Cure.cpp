/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 07:09:17 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 11:59:03 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


std::string	Cure::_class_name = __FILE__;
std::string	Cure::_class_type = "cure";

Cure::Cure(void)
	:	AMateria(_class_type)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor" << " type: " << this->_type << std::endl;
	return ;
}

Cure::Cure(const Cure &other)
	:	AMateria(other)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor" << " type: " << this->_type << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor" << std::endl;
	return ;
}


Cure& Cure::operator=(const Cure &other)
{
	if (this == &other)
		return (*this);
	this->AMateria::operator=(other);
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Operator=" << " Type: " << this->_type << std::endl;
	return (*this);
}


AMateria* Cure::clone(void) const
{
	Cure	*new_ice = new Cure(*this);
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "clone" << " Type: " << this->_type << std::endl;
	return (new_ice);
}

void Cure::use(ICharacter& target)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "* heals " << target.getName() << "’s wounds *" << std::endl;
}

