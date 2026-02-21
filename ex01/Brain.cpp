/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 20:02:51 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 13:01:10 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string		Brain::_class_name = "Brain";
unsigned int	Brain::_max_ideas = BR_IDEAS_LEN;


Brain::Brain(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default constructor"
		<< std::endl;
	for (unsigned int i = 0; i < this->_max_ideas; i++)
	{
		this->_ideas[i] = "~~~~ empty idea ~~~~";
		//std::cout << "idea " << i << " " << this->_ideas[i] << std::endl;
	}
}
Brain::Brain(const Brain &other)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "copy constructor"
		<< std::endl;
	*this = other;
}

Brain::~Brain(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Destructor"
		<< std::endl;
}

Brain&	Brain::operator=(const Brain &other)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator="
		<< std::endl;
	if (this == &other)
		return (*this);
	for (unsigned int i = 0; i < this->_max_ideas; i++)
	{
		if (i >= other._max_ideas)
		{
			this->_ideas[i] = "";
		}
		this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

std::string	Brain::idea_get(unsigned int index) const
{
	/*
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "index: " << index
		<< std::endl;
		*/
	//if (index >= this->_max_ideas)
		//return ("");
	//return (this->_ideas[index]);
	//std::cout << "idea " << index << " " << this->_ideas[index] << std::endl;
	return (this->_ideas[index]);
}

int	Brain::idea_set(std::string idea, unsigned int index)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "index: " << index << std::endl;
	if (index >= this->_max_ideas)
		return (-1);
	this->_ideas[index] = idea;
	return (1);
}
