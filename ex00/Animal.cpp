/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:01:28 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/28 00:25:35 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>
#include "color.hpp"

Animal::Animal() : _type("Default Animal")
{
	std::cout << GREEN << "Animal : Default constructor called" << RESET << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << GREEN << "Animal : Ordinary constructor called" << RESET << std::endl;
	return ;
}

Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout << GREEN << "Animal : Copy constructor called" << RESET << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << BLUE << "Animal : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal : Destructor called" << RESET << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Default noise" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}
