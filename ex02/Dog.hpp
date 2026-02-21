/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:28:25 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 16:01:10 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);
		Dog(const Dog &other);
		~Dog(void);

		Dog&			operator=(const Dog &other);

		void			makeSound(void) const;
		std::string		idea_get(unsigned int index) const;
		int				idea_set(std::string idea, unsigned int index);

	private:
		Brain				*_brain;

		static std::string	_class_name;
		static std::string	_sound;
};

#endif
