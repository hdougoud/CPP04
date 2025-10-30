/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:02::17 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/30 16:47:59 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "color.hpp"

Character::Character() : _name("noName"), _floor(Floor::getInstance())
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = 0;
	std::cout << C_CSTR << "Character : Default constuctor called" << RESET << std::endl;
	return ;
}

Character::Character(const Character &src) : _name(src._name), _floor(Floor::getInstance())
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	std::cout << C_CSTR << "Character : Copy constuctor called" << RESET << std::endl;
	return ;
}

Character	&Character::operator=(const Character &src)
{
	std::cout << C_ASNM << "Character : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_floor = src._floor;
		for(int i = 0; i < INVENTORY_SIZE; i++)
		{
			if (this->_inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	}
	std::cout << C_DSTR << "Character : Destructor called" << RESET << std::endl;
	return ;
}

std::string const &Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << YELLOW << this->_name << " cannot equip a non-existent Materia" << RESET << std::endl;
		return ;
	}
	for (int i = 0; i < INVENTORY_SIZE; i++)
	{
		if(!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << YELLOW << this->_name << "'s inventory is full, nothing happened" << RESET << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx >= INVENTORY_SIZE)
	{
		std::cout << RED << "idx is out of range" << RESET << std::endl;
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << YELLOW << this->_name << " has nothing in inventory slot" << idx << RESET << std::endl;
		return ;
	}
	if (!this->_floor->dropMateria(this->_inventory[idx]))
		this->_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{
	if (!this->_inventory[idx])
	{
		std::cout << YELLOW << this->_name << " does not have any Materia in this slot" << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}
