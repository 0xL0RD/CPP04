/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 08:25:46 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 12:36:31 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int	main(void)
{
	{
		std::cout << "-------------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = tmp->clone();
		delete tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("noooot fouuunnd");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->unequip(0);
		me->unequip(10);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "-------------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		delete me;
		delete src;
	}
	{
		std::cout << "-------------------" << std::endl;
		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		MateriaSource src2;
		src2 = *src;
		delete src;
	}
	{
		std::cout << "-------------------" << std::endl;
		MateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		MateriaSource* src2 = new MateriaSource(*src);
		delete src;
		delete src2;
	}
	{
		std::cout << "-------------------" << std::endl;
		MateriaSource* src = new MateriaSource();
		Ice	*ice = new Ice();
		src->learnMateria(ice);
		src->learnMateria(ice);
		delete src;
	}
	{
		std::cout << "-------------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		me->equip(tmp);
		delete me;
		delete src;
	}
	{
		std::cout << "-------------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "-------------------" << std::endl;
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		Character* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		Character* bob = new Character(*me);
		bob->use(0, *bob);
		bob->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	return (0);
}
