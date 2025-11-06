/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:02::17 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/06 00:25:48 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "color.hpp"

Character::Character() : _name("noName"), _floor(Floor::getInstance())
{
	//std::cout << C_CSTR << "Character : Default constuctor called" << RESET << std::endl;
	for(int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = 0;
	return ;
}

Character::Character(std::string const &name) : _name(name), _floor(Floor::getInstance())
{
	//std::cout << C_CSTR << "Character : Ordinary constuctor called" << RESET << std::endl;
	for(int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = 0;
	return ;
}

Character::Character(const Character &src) : _name(src._name), _floor(Floor::getInstance())
{
	//std::cout << C_CSTR << "Character : Copy constuctor called" << RESET << std::endl;
	for(int i = 0; i < INVENTORY_SIZE; i++)
	{
		this->_inventory[i] = 0;
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
	}
	return ;
}

Character	&Character::operator=(const Character &src)
{
	//std::cout << C_ASNM << "Character : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->_floor = src._floor;
		for(int i = 0; i < INVENTORY_SIZE; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (src._inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	//std::cout << C_DSTR << "Character : Destructor called" << RESET << std::endl;
	for(int i = 0; i < INVENTORY_SIZE; i++)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	}
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
		std::cout << RED << this->_name << " cannot equip a non-existent Materia" << RESET << std::endl;
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
	std::cout << YELLOW << this->_name << "'s inventory is full, the current Materia has been dropped" << RESET << std::endl;
	Floor::getInstance().dropMateria(m);
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
		std::cout << YELLOW << this->_name << "'s inventory slot " << idx << " is empty" << RESET << std::endl;
		return ;
	}
	this->_floor.dropMateria(this->_inventory[idx]);
	this->_inventory[idx] = 0;
}

void	Character::use(int idx, ICharacter &target)
{	
	if (idx < 0 || idx >= INVENTORY_SIZE)
	{
		std::cout << RED << "idx is out of range" << RESET << std::endl;
		return ;
	}
	if (!this->_inventory[idx])
	{
		std::cout << YELLOW << this->_name << " does not have any Materia in this slot" << RESET << std::endl;
		return ;
	}
	this->_inventory[idx]->use(target);
}
