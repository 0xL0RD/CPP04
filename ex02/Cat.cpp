/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:38:13 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 16:01:32 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

std::string	Cat::_class_name = "Cat";
std::string	Cat::_sound = "meow";

Cat::Cat(void)
{
	this->_type = this->_class_name;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor"
		<< " type: " << this->_type
		<< std::endl;
	this->_brain = new Brain;
	return ;
}

Cat::Cat(const Cat &other)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Copy constructor"
		<< " type: " << this->_type
		<< std::endl;
	this->AAnimal::operator=(other);
	this->_brain = new Brain(*other._brain);
	return ;
}

Cat::~Cat(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor"
		<< std::endl;
	delete this->_brain;
	this->_brain = NULL;
}

Cat&	Cat::operator=(const Cat &other)
{
	if (this == &other)
		return (*this);
	this->AAnimal::operator=(other);
	this->_brain = other._brain;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator=; type: " << this->_type 
		<< std::endl;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< this->_sound
		<< std::endl;
	return ;
}

std::string	Cat::idea_get(unsigned int index) const
{
	return (this->_brain->idea_get(index));
}

int	Cat::idea_set(std::string idea, unsigned int index)
{
	return (this->_brain->idea_set(idea, index));
}
