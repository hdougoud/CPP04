/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:50:05 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/30 15:59:06 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class AMateria ;

class MateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource operator=(const MateriaSource &src);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
};
