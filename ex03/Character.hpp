/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 14:46:59 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 10:09:21 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

# define CH_SLOT_LEN 4

class AMateria;

class Character : public ICharacter
{
	public:
		Character(const Character &other);
		Character(const std::string name);
		~Character();

		Character& operator=(const Character &other);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	
	protected:
		std::string	_name;
		AMateria	*_slot[CH_SLOT_LEN];
		size_t		_slot_len;

		int		addHistory(AMateria *m);
		int		deleteMateriaFromHistory(AMateria &m);
		int		deleteMateriaFromHistory(size_t idx);


	private:
		AMateria **_history;
		size_t	_history_len;

		Character(void);
		static std::string _class_name;
};

#endif
