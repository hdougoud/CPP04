/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:51:03 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 18:11:47 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.hpp"
#include "Floor.hpp"

Floor::Floor()
{
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
	std::cout << RED << "Floor : Default destructor called" << RESET << std::endl;
}

Floor	*Floor::getInstance(void)
{
	if (_instancePtr == NULL)
		return (_instancePtr = new Floor());
	return (_instancePtr);

}

Floor *Floor::_instancePtr = NULL;
