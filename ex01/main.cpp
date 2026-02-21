/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:11:42 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 14:40:45 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define AR_LEN 3

int	main(void)
{
	{
		std::string	ideatmp;

		std::cout << "----------------" << std::endl;
		std::cout << "SETTING IDEAS" << std::endl;
		Dog	d;

		d.makeSound();
		std::cout << "Idea 0: " << d.idea_get(0) << std::endl;
		d.idea_set("Play soccer", 0);
		std::cout << "Idea 0: " << d.idea_get(0) << std::endl;
		d.idea_set("Going on vacations", 10);
		std::cout << "Idea 10: " << d.idea_get(10) << std::endl;

		std::cout << "----------------" << std::endl;
		std::cout << "DEEP COPY TEST" << std::endl;
		std::cout << "Deep copy (Dog2):" << std::endl;
		Dog	d2(d);
		std::cout << "Dog2 Idea 0: " << d2.idea_get(0) << std::endl;
		std::cout << "Dog2 Idea 1: " << d2.idea_get(1) << std::endl;
		std::cout << "Dog2 Idea 10: " << d2.idea_get(10) << std::endl;
		std::cout << "Changing idea 11 on Dog0 (not in Dog2):" << std::endl;
		d.idea_set("Sleeping", 11);
		std::cout << "Dog0 Idea 11: " << d.idea_get(11) << std::endl;
		std::cout << "Dog2 Idea 11: " << d2.idea_get(11) << std::endl;
		std::cout << "----------------" << std::endl;
		std::cout << "DESTRUCTORS:" << std::endl;
	}
	{
		std::cout << "----------------" << std::endl;
		Animal *ar[1];
		ar[0] = new Dog();
		ar[0]->makeSound();
		delete ar[0];
	}
	{
		std::cout << "----------------" << std::endl;
		Animal *ar[1];
		ar[0] = new Cat();
		ar[0]->makeSound();
		delete ar[0];
	}
	{
		std::cout << "----------------" << std::endl;
		std::cout << "ARRAY OF ANIMALS" << std::endl;
		Animal *ar[AR_LEN];
		for (int i = 0; i < AR_LEN; i++)
		{
			std::cout << "Creating Animal ("  << i << "):" << std::endl;
			if (i % 2 == 0)
				ar[i] = new Dog();
			else
				ar[i] = new Cat();
		}
		for (int i = 0; i < AR_LEN; i++)
		{
			std::cout << "Detroying " << ar[i]->getType() << std::endl;
			delete ar[i];
		}
	}
	return (0);
}
