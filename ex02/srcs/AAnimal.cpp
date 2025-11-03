/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:01:28 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 16:42:03 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>
#include "color.hpp"

AAnimal::AAnimal() : _type("Default Animal")
{
	std::cout << C_CSTR << "Animal : Default constructor called" << RESET << std::endl;
	return ;
}

AAnimal::AAnimal(std::string type) : _type(type)
{
	std::cout << C_CSTR << "Animal : Ordinary constructor called" << RESET << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &src) : _type(src._type)
{
	std::cout << C_CSTR << "Animal : Copy constructor called" << RESET << std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &src)
{
	std::cout << C_ASNM << "Animal : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << C_DSTR << "Animal : Destructor called" << RESET << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->_type);
}
