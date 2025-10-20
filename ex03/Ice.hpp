/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:49:08 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 20:29:59 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &src);
		~Ice();
		void	use(ICharacter& target);
		AMateria* clone(void) const;
	private:
};

#endif
