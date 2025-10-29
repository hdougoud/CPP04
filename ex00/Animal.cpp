/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:01:28 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 16:38:42 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include "color.hpp"

Animal::Animal() : _type("Default Animal")
{
	std::cout << C_CSTR << "Animal : Default constructor called" << RESET << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << C_CSTR << "Animal : Ordinary constructor called" << RESET << std::endl;
	return ;
}

Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout << C_CSTR << "Animal : Copy constructor called" << RESET << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << C_ASNM << "Animal : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << C_DSTR << "Animal : Destructor called" << RESET << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Default noise" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
