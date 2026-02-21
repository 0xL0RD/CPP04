/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:21:23 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 13:01:18 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string	Animal::_class_name = "Animal";
std::string	Animal::_sound = "enjoy the silence";

Animal::Animal(void)
	:	_type("undefined")
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor"
		<< " type: " << this->_type
		<< std::endl;
	//this->_brain = new Brain;
	return ;
}

Animal::Animal(const Animal	&other)
{
	*this = other;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Copy constructor"
		<< " type: " << this->_type
		<< std::endl;
	//this->_brain = new Brain(*other._brain);
}

Animal::~Animal(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor"
		<< std::endl;
	//delete this->_brain;
	return ;
}

Animal&	Animal::operator=(const Animal &other)
{
	if (this == &other)
		return (*this);
	this->_type = other._type;
	/*
	std::cout << "Brain this ->p: " << this->_brain << std::endl;
	std::cout << "Brain other->p: " << other._brain << std::endl;

	this->_brain = other._brain;
	*/
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator=; type: " << this->_type 
		<< std::endl;
	return (*this);
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< this->_sound
		<< std::endl;
	return ;
}

