/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:11:42 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 12:11:48 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	{
		std::string	ideatmp;

		std::cout << "----------------" << std::endl;
		Dog	d;

		d.makeSound();
		std::cout << "Idea 0: " << d.idea_get(0) << std::endl;
		d.idea_set("Play soccer", 0);
		std::cout << "Idea 0: " << d.idea_get(0) << std::endl;
		d.idea_set("Going on vacations", 10);
		std::cout << "Idea 10: " << d.idea_get(10) << std::endl;

		std::cout << "----------------" << std::endl;
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
		std::cout << "Destructors:" << std::endl;
	}
	{
		std::cout << "----------------" << std::endl;
		Animal *ar[1];
		ar[0] = new Dog();
		ar[0]->makeSound();
		delete ar[0];
	}
	return (0);
}
