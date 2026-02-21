/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:11:42 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 15:59:23 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define AR_LEN 3

int	main(void)
{
	{
		std::cout << "----------------" << std::endl;
		std::cout << "DOG makes sound" << std::endl;
		const AAnimal* d = new Dog();
		d->makeSound();
		delete d;
	}
	{
		/*

		// Abstract class --> does not compile
		AAnimal *a = new AAnimal();
		a->makeSound();
		delete a;

		*/
	}
	return (0);
}
