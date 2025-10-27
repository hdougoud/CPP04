/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:59:02 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/27 21:57:01 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include "color.hpp"

WrongAnimal::WrongAnimal() : _type("Default Wrong Animal")
{
	std::cout << GREEN << "WrongAnimal : Default constructor called" << RESET << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << GREEN << "WrongAnimal : Ordinary constructor called" << RESET << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout << GREEN << "WrongAnimal : Copy constructor called" << RESET << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << BLUE << "WrongAnimal : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal : Destructor called" << RESET << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Generic wrong animal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
