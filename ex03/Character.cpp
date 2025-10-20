/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:14:28 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 18:10:01 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("Default")
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GREEN << "Charcater : Default constructor called" << RESET << std::endl;
	return ;
}

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	std::cout << GREEN << "Charcater : Ordinary constructor called" << RESET << std::endl;
	return ;
}

Character::Character(const Character &src) : _name(src._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
		
	}
	std::cout << GREEN << "Character : Copy constructor called" << RESET << std::endl;
	return ;
}

Character &Character::operator=(const Character &src)
{
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			
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
}

void	Character::unequip(int idx)
{ 
	if (idx < 0 || idx > 3)
		return ;
	if (!this->_inventory[idx])
		return ;
	delete this->_inventory[idx];
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (!this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
}
