/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:11:42 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 18:31:37 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &other);
		virtual ~WrongAnimal(void);

		WrongAnimal&	operator=(const WrongAnimal &other);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;

	protected:
		std::string		_type;

	private:
		static std::string	_class_name;
		static std::string	_sound;
};

#endif
