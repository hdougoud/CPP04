/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:15:20 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/22 00:28:49 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "SFloor.hpp"

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(const Character &src);
		Character &operator=(const Character &src);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		Floor		*_floor;
};
