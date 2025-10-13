/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:35 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 15:55:15 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << GREEN << "AAnimal : Default constructor called" << RESET << std::endl;
	return ;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
	std::cout << GREEN << "AAnimal : Ordinary constructor called" << RESET << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : _type(src._type)
{
	std::cout << GREEN << "AAnimal : Copy constructor called" << RESET << std::endl;
	return ;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
	std::cout << BLUE << "Assignement operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << RED << "AAnimal : Default destructor called" << RESET << std::endl;
	return ;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "Generic animal noise" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}
