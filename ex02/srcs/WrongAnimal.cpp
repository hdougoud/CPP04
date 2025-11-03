/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:59:02 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 16:43:52 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>
#include "color.hpp"

WrongAnimal::WrongAnimal() : _type("Default Wrong AAnimal")
{
	std::cout << C_CSTR << "WrongAnimal : Default constructor called" << RESET << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << C_CSTR << "WrongAnimal : Ordinary constructor called" << RESET << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout << C_CSTR << "WrongAnimal : Copy constructor called" << RESET << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << C_ASNM << "WrongAnimal : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << C_DSTR << "WrongAnimal : Destructor called" << RESET << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Generic wrong animal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
