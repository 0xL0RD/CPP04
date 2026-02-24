/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:28:23 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 08:27:28 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "Character.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const & type);
		virtual ~AMateria(void);
		
		AMateria&	operator=(const AMateria &lhs);
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	protected:
		std::string	_type;
		AMateria(void);    //TODO: abstract class can have private constructor?
	
	private:
		static std::string	_class_name;
};

#endif
