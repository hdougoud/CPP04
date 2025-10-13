/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:13:09 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/09 15:13:11 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Wrong generic Animal")
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
	std::cout << GREEN << "WrongAnimal : Copy construtor called" << RESET << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	std::cout << BLUE << "WrongAnimal : Assignment operator called" << RESET << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal : Default destructor called" << RESET << std::endl;
	return ;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong generic noise" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

