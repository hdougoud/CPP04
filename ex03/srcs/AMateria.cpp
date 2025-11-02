/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:12:55 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/02 20:21:42 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>
#include "ICharacter.hpp"
#include "color.hpp"


AMateria::AMateria() : _type("Default")
{
	//std::cout << C_CSTR << "AMateria : Default constructor called" << RESET << std::endl;
	return ;
}

AMateria::AMateria(const std::string &type) : _type(type)
{
	//std::cout << C_CSTR << "AMateria : Ordinary constructor called" << RESET << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &src) : _type(src._type)
{
	//std::cout << C_CSTR << "AMateria : Copy constructor called" << RESET << std::endl;
	return ; 
}

AMateria	&AMateria::operator=(const AMateria &src)
{
	//std::cout << C_ASNM << "AMateria : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		this->_type = src._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	//std::cout << C_DSTR << "AMateria : Destructor called" << RESET << std::endl;
	return ;
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << BLUE << "* use a useless Materia at " << target.getName() << " *" << RESET << std::endl;
}

