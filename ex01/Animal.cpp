/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 15:55:15 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GREEN << "Animal : Default constructor called" << RESET << std::endl;
	return ;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << GREEN << "Animal : Ordinary constructor called" << RESET << std::endl;
}

Animal::Animal(const Animal &src) : _type(src._type)
{
	std::cout << GREEN << "Animal : Copy constructor called" << RESET << std::endl;
	return ;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << BLUE << "Assignement operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << RED << "Animal : Default destructor called" << RESET << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "Generic animal noise" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
