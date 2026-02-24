/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 08:29:44 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 12:07:41 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

std::string	MateriaSource::_class_name = __FILE__;

MateriaSource::MateriaSource(void)
	: _materias_len(MS_MATERIAS_LEN)
{
	for (size_t i = 0; i < this->_materias_len; i++)
		this->_materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
	: _materias_len(MS_MATERIAS_LEN)
{
	for (size_t i = 0; i < this->_materias_len; i++)
		this->_materias[i] = NULL;
	this->MateriaSource::operator=(other);
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "desctructor" << std::endl;
	for (size_t i = 0; i < this->_materias_len; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = NULL;
	}
	this->_materias_len = 0;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return (*this);
	for (size_t i = 0; i < this->_materias_len; i++)
	{
		delete this->_materias[i];
		this->_materias[i] = NULL;
	}
	for (size_t i = 0; i < this->_materias_len; i++)
	{
		if (i >= other._materias_len)
			break ;
		if (other._materias[i] == NULL)
			continue ;
		this->_materias[i] = other._materias[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	unsigned int	i;

	if (materia == NULL)
		return ;
	for (i = 0; i < this->_materias_len; i++)
	{
		if (this->_materias[i] == materia)
			return ;
	}
	for (i = 0; i < this->_materias_len; i++)
	{
		if (this->_materias[i] == NULL)
			break ;
	}
	if (i >= this->_materias_len)
	{
		delete materia;
		return ;
	}
	this->_materias[i] = materia;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	AMateria *new_materia;

	for (size_t i = 0; i < this->_materias_len; i++)
	{
		if (this->_materias[i] == NULL)
			continue ;
		if (this->_materias[i]->getType() == type)
		{
			new_materia = this->_materias[i]->clone();
			return (new_materia);
		}
	}
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "materia '" << type << "' not found" << std::endl;
	return (NULL);
}
