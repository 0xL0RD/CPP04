/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:33:04 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/23 17:21:25 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "Character.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &other);
		~Ice(void);

		Ice& operator=(const Ice &other);

		AMateria* clone() const;
		void use(ICharacter& target);

	private:
		static std::string	_class_name;
		static std::string 	_class_type;
};

#endif
