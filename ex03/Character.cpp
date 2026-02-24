/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 09:41:50 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 12:16:15 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

std::string Character::_class_name = __FILE__;

Character::Character(const Character &other)
	:	_slot_len(CH_SLOT_LEN)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default 'copy' constructor" << " name: " << this->_name << std::endl;
	this->_name = other._name;
	this->_history = NULL;
	this->_history_len = 0;
	for (size_t i = 0; i < this->_slot_len; i++)
	{
		this->_slot[i] = NULL;
	}
	for (size_t i = 0; i < this->_slot_len; i++)
	{
		if (i >= other._slot_len)
			break ;
		if (other._slot[i] != NULL)
			this->_slot[i] = other._slot[i]->clone();
	}
}

Character::Character(const std::string name)
	:	_name(name),
		_slot_len(CH_SLOT_LEN)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default 'name' constructor" << " name: " << this->_name << std::endl;
	this->_history = NULL;
	this->_history_len = 0;
	for (size_t i = 0; i < this->_slot_len; i++)
	{
		this->_slot[i] = NULL;
	}
}

Character::~Character(void)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "Default destructor" << " name: " << this->_name << std::endl;
	for (size_t i = 0; i < this->_slot_len; i++)
	{
		delete this->_slot[i];
	}
	for (size_t i = 0; i < this->_history_len; i++)
	{
		delete this->_history[i];
		this->_history[i] = NULL;
	}
	if (this->_history != NULL)
		delete [] this->_history;
	return ;
}

Character& Character::operator=(const Character &other)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "operator= in" << " name: " << this->_name << std::endl;
	if (this == &other)
		return (*this);
	this->_name = other._name;
	for (size_t i = 0; i < this->_slot_len; i++)
	{
		delete this->_slot[i];
		this->_slot[i] = NULL;
	}
	for (size_t i = 0; i < this->_slot_len; i++)
	{
		if (i >= other._slot_len)
			break ;
		this->_slot[i] = other._slot[i]->clone();
	}
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (m == NULL)
		return ;
	for (size_t i = 0; i < this->_slot_len; i++)
	{
		if (this->_slot[i] == m)
				return ;
	}
	if (this->_slot[this->_slot_len - 1] == NULL)
	{
		for (size_t i = 0; i < this->_slot_len; i++)
		{
			if (this->_slot[i] != NULL)
				continue ;
			this->_slot[i] = m;
			return ;
		}
	}
	else
	{
		delete m;
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 
			|| (unsigned int) idx >= this->_slot_len
			|| this->_slot[idx] == NULL)
		return ;
	this->addHistory(this->_slot[idx]);
	this->_slot[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0
			|| (unsigned int) idx >= this->_slot_len
			|| this->_slot[idx] == NULL)
		return ;	
	this->_slot[idx]->use(target);
}

int		Character::deleteMateriaFromHistory(size_t idx)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "delete materia idx: " << idx << std::endl;
	if (idx >= this->_history_len)
		return (-1);
	delete &this->_history[idx];
	this->_history[idx] = NULL;
	return (1);
}

int		Character::deleteMateriaFromHistory(AMateria &m)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "delete materia p: " << &m << std::endl;

	if (this->_history_len <= 0)
		return (-1);
	for (size_t i = 0; i < this->_history_len; i++)
	{
		if (this->_history[i] == &m)
		{
			this->deleteMateriaFromHistory(i);
			return (1);
		}
	}
	return (-1);
}

int		Character::addHistory(AMateria *m)
{
	std::cout << "[" << this->_class_name << "]" << "[" << __FUNCTION__ << "] "
		<< "add history materia p: " << m << std::endl;
	if (m == NULL)
		return (-1);
	size_t new_size = this->_history_len + 1;
	AMateria **new_array = new AMateria *[new_size]();
	for (size_t i = 0; i < this->_history_len; i++)
		new_array[i] = this->_history[i];
	new_array[new_size - 1] = m;
	delete [] this->_history;
	this->_history = new_array;
	this->_history_len = new_size;
	return (this->_history_len);
}
