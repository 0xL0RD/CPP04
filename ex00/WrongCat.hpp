/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:28:25 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 18:59:39 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "Animal.hpp"

class WrongCat : public Animal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat &other);
		~WrongCat(void);

		WrongCat&	operator=(const WrongCat &other);
		void	makeSound(void) const;

	private:
		static std::string	_class_name;
		static std::string	_sound;
};

#endif
