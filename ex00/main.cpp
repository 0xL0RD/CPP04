/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:11:42 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 15:42:51 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int	main(void)
{
	{
		std::cout << "----------------" << std::endl;
		Animal a;
		a.makeSound();
	}
	{
		std::cout << "----------------" << std::endl;
		Dog d;
		d.makeSound();
	}
	{
		std::cout << "----------------" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete j;
		delete i;
	}
	{
		std::cout << "----------------" << std::endl;
		std::cout << "WrongCat" << std::endl;
		WrongCat	cat;
		cat.makeSound();
		std::cout << std::endl;
		WrongAnimal	*animal = new WrongCat();
		animal->makeSound();
		delete animal;
	}
	return (0);
}
