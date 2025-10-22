/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:14:28 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/22 11:01:31 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Default"), _floor(Floor::getInstance())
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GREEN << "Charcater : Default constructor called" << RESET << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name), _floor(Floor::getInstance())
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GREEN << "Charcater : Ordinary constructor called" << RESET << std::endl;
	return ;
}

Character::Character(const Character &src) : _name(src._name), _floor(src._floor)
{
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	std::cout << GREEN << "Character : Copy constructor called" << RESET << std::endl;
	return ;
}

Character &Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_floor = src._floor;
		for (int i = 0; i < 4; i++)
		{
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	std::cout << BLUE << "Character : Assignment operator called" << RESET << std::endl;
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << RED << "Character : Default destructor called" << RESET << std::endl;
	return ;
}

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << RED << this->getName() << "'s inventory is full, impossible to equip " << m->getType() << "Materia !" << RESET << std::endl;
}

void	Character::unequip(int idx)
{ 
	if (idx < 0 || idx > 3)
		return ;
	if (!this->_inventory[idx])
		return ;

	if (!this->_floor->dropItemOnFloor(this->_inventory[idx]))
		this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (!this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
}
