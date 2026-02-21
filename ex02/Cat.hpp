/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 16:28:25 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/21 16:01:22 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat(void);
		Cat(const Cat &other);
		~Cat(void);

		Cat&			operator=(const Cat &other);

		void			makeSound(void) const;
		std::string		idea_get(unsigned int index) const;
		int				idea_set(std::string idea, unsigned int index);

	private:
		Brain				*_brain;

		static std::string	_class_name;
		static std::string	_sound;
};

#endif
