/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:02:17 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 23:31:46 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>
#include "color.hpp"

Character::Character() : _name("noName")
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = 0;
	std::cout << C_CSTR << "Character : Default constuctor called" << RESET << std::endl;
	return ;
}

Character::Character(const Character &src) : _name(src._name)
{
	for(int i = 0; i < 4; i++)
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
		for(int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete (this->_inventory[i]);
	}
	std::cout << C_DSTR << "Character : Destructor called" << RESET << std::endl;
	return ;
}
