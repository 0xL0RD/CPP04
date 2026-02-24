/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 08:25:46 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 11:11:00 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include <stdio.h> //TODO: remove

int	main(void)
{
	/*
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		//src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		/ *
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		* /
		std::cout << "2-------------------" << std::endl;
		tmp = tmp->clone();
		delete tmp;
		//getchar();
		//me->equip(tmp);
		std::cout << "-------------------" << std::endl;
		//tmp = src->createMateria("ice");
		//me->equip(tmp);
		//tmp = src->createMateria("cure");
		//me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->unequip(0);
		//me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	*/
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		//delete tmp;
		delete me;
		delete src;
	}
	return (0);
}
