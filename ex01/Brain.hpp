/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rubsanch <rubsanch@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 19:51:08 by rubsanch          #+#    #+#             */
/*   Updated: 2026/02/20 20:19:58 by rubsanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

# define BR_IDEAS_LEN 100

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &other);
		~Brain(void);

		Brain&	operator=(const Brain &other);

		std::string	idea_get(void);
		void	ideas_set(std::string idea);

	private:
		std::string	_ideas[BR_IDEAS_LEN];
		static std::string	_class_name;
}

#endif
