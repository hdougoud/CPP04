/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:57:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/17 14:32:03 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
