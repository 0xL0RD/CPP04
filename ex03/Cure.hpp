/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:33:04 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 12:02:59 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &other);
		~Cure(void);

		Cure& operator=(const Cure &other);

		AMateria* clone() const;
		void use(ICharacter& target);

	private:
		static std::string	_class_name;
		static std::string 	_class_type;
};

#endif
