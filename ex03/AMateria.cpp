/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 06:51:33 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 11:01:52 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string	AMateria::_class_name = __FILE__;

AMateria::AMateria(void)
	:	_type("default_materia")
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor" << " type: " << this->_type << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type)
	:	_type(type)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default 'type' constructor" << " type: " << this->_type << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria &lhs)
{
	this->_type = lhs._type;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Operator=" << " Type: " << this->_type << std::endl;
	return (*this);
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default use for " << this->_type << std::endl;
	(void) target;
}


