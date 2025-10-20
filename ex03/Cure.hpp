/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:57:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 21:25:45 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure &src);
		Cure &operator=(const Cure &src);
		AMateria *clone(void) const;
		~Cure();
		void	use(ICharacter &target);
	private:
};

#endif
