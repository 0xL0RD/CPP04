/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 09:11:42 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 16:06:50 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal
{
	public:
		AAnimal(void);
		AAnimal(const AAnimal &other);
		virtual ~AAnimal(void);

		AAnimal&	operator=(const AAnimal &other);

		std::string		getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string		_type;

	private:
		static std::string	_class_name;
		static std::string	_sound;
};

#endif
