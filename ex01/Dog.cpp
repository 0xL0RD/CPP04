/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:38:13 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 16:37:04 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

std::string	Dog::_class_name = "Dog";
std::string	Dog::_sound = "guau";

Dog::Dog(void)
{
	this->_type = this->_class_name;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor"
		<< " type: " << this->_type
		<< std::endl;
	this->_brain = new Brain;
	return ;
}

Dog::Dog(const Dog &other)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Copy constructor"
		<< " type: " << this->_type
		<< std::endl;
	this->Animal::operator=(other);
	this->_brain = new Brain(*other._brain);
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	this->_brain = NULL;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor"
		<< std::endl;
}

Dog&	Dog::operator=(const Dog &other)
{
	if (this == &other)
		return (*this);
	this->Animal::operator=(other);
	delete this->_brain;
	this->_brain = new Brain(*other._brain);
	//*this->_brain = *other._brain;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator=; type: " << this->_type 
		<< std::endl;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< this->_sound
		<< std::endl;
	return ;
}

std::string	Dog::idea_get(unsigned int index) const
{
	return (this->_brain->idea_get(index));
}

int	Dog::idea_set(std::string idea, unsigned int index)
{
	return (this->_brain->idea_set(idea, index));
}
