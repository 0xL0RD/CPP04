/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:11:42 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 18:59:49 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongCat.hpp"

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
	}
	{
		std::cout << "----------------" << std::endl;
		WrongCat	cat;
		cat.makeSound();
	}
	return (0);
}
