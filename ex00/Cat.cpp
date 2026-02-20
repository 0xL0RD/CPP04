/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:38:13 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 18:27:50 by rubsanch         ###   ########.fr       */
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
	return ;
}

Cat::Cat(const Cat &other)
{
	Animal	*a = this;
	*a = other;
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Copy constructor"
		<< " type: " << this->_type
		<< std::endl;
}

Cat::~Cat(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Desconstructor"
		<< std::endl;
}

Cat&	Cat::operator=(const Cat &other)
{
	this->_type = other._type;
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
