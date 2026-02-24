/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:16:58 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/24 10:37:55 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define MS_MATERIAS_LEN 4

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		~MateriaSource(void);

		MateriaSource& operator=(const MateriaSource &other);

		void		learnMateria(AMateria*);
		AMateria*	createMateria(const std::string &type);
	
	private:
		AMateria	*_materias[MS_MATERIAS_LEN];
		size_t	_materias_len;

		MateriaSource(const MateriaSource &other);
		static std::string	_class_name;
};

#endif

