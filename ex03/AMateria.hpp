/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:31:57 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/14 15:16:17 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "Character.hpp"
#include <iostream>

typedef class ICharacter ICharacter;

class AMateria
{
	protected:
	public:
		AMateria();
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &src);
		~AMateria();
		AMateria(std::string const & type);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
