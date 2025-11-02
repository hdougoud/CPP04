/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:42:12 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/02 21:32:17 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ICharacter.hpp"
#include <string>
#include "AMateria.hpp"
#include "Floor.hpp"

#define INVENTORY_SIZE 4

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string const &name);
		Character(const Character &src);
		Character &operator=(const Character &src);
		~Character();

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string	_name;
		AMateria	*_inventory[INVENTORY_SIZE];
		Floor		&_floor;
};
