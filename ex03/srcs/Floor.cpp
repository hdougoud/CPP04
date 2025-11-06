/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:10:45 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/06 01:28:46 by hdougoud         ###   ########.fr       */
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

void	Floor::dropMateria(AMateria *materia)
{
	if (!materia)
	{
		std::cout << RED << "Canno't delete an empty Materia" << RESET << std::endl;
		return ;
	}
	for(int i = 0; i < FLOOR_SIZE; i++)
	{
		if (!this->_dropped[i])
		{
			this->_dropped[i] = materia;
			return ;
		}
	}
	std::cout << YELLOW << "Floor is full, impossible to drop an Materia, so it will be destroyed" << RESET << std::endl;
	delete materia;
}
