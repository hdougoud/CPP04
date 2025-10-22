/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SFloor.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:51:03 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/22 11:02:51 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.hpp"
#include "SFloor.hpp"
#include "AMateria.hpp"

Floor::Floor()
{
	for (int i = 0; i < 100; i++)
		this->_dropped[i] = NULL;
	std::cout << GREEN << "Floor : Default destructor called" << RESET << std::endl;
	return ;
}

Floor::Floor(const Floor &src)
{
	if (src._instancePtr)
		delete (this);
	std::cout << GREEN << "Floor : Copy constructor called" << RESET << std::endl;
	return ;
}

Floor::~Floor()
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_dropped[i])
			delete this->_dropped[i];
	}
	delete _instancePtr;
	std::cout << RED << "Floor : Default destructor called" << RESET << std::endl;
	return ;
}

Floor	*Floor::getInstance(void)
{
	if (_instancePtr == NULL)
		_instancePtr = new Floor();
	return (_instancePtr);
}

bool	Floor::dropItemOnFloor(AMateria *dropped)
{
	for (int i = 0; i < 100; i++)
	{
		if (!this->_dropped[i])
		{
			 this->_dropped[i] = dropped;
			return (false);
		}
	}
	std::cout << RED << "The floor is full, cannot unequip the materia" << RESET << std::endl;
	return (true);
}

Floor *Floor::_instancePtr = NULL;
