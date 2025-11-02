/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:10:45 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/02 21:33:36 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"
#include <iostream>
#include <new>
#include "AMateria.hpp"
#include "color.hpp"

Floor::Floor()
{
	//std::cout << C_CSTR << "Floor : Default constructor called" << RESET << std::endl;
	for (int i = 0; i < FLOOR_SIZE; i++)
		this->_dropped[i] = 0;
	return ;
}

Floor::~Floor()
{
	//std::cout << C_DSTR << "Floor : Destructor called" << RESET << std::endl;
	for (int i = 0; i < FLOOR_SIZE; i++)
	{
		if (this->_dropped[i])
			delete (this->_dropped[i]);
	}
	return ;
}

Floor	&Floor::getInstance(void)
{
	static Floor _instance;
	return (_instance);
}

bool	Floor::dropMateria(AMateria *materia)
{

	if (!materia)
	{
		std::cout << RED << "Canno't delete an empty Materia" << RESET << std::endl;
		return (false);
	}
	for(int i = 0; i < FLOOR_SIZE; i++)
	{
		if (!this->_dropped[i])
			this->_dropped[i] = materia;
		return (false);
	}
	std::cout << YELLOW << "Floor is full, impossible to unequip your a Materia" << RESET << std::endl;
	return (true);
}
