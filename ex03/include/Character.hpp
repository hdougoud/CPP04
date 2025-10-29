/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:42:12 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 21:32:08 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <string>
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(const Character &src);
		Character &operator=(const Character &src);
		~Character();

		std::string const &getName() const = 0;
		void equip(AMateria* m) = 0;
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;
	private:
		std::string	_name;
		AMateria	*_inventory[4];
};
