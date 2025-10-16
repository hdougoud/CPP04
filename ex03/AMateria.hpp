/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:31:57 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/16 15:57:43 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

typedef class ICharacter ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const AMateria &src);
		AMateria &operator=(const AMateria &src);
		AMateria(std::string const & type);
		virtual ~AMateria();
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		std::string const & getType() const;
	protected:
		std::string _type;
};

#endif
