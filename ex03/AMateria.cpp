/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 15:59:48 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 13:33:12 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "color.hpp"

AMateria::AMateria() : _type("Default")
{
	std::cout << GREEN << "AMateria : Default constructor called" << RESET << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << GREEN << "AMateria : Ordinary constructor called" << RESET << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &src) : _type(src._type)
{
	std::cout << GREEN << "AMateria : Copy constructor called" << RESET << std::endl;
	return ;
}

AMateria	&AMateria::operator=(const AMateria &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	std::cout << BLUE << "AMateria : Assignment operator called" << RESET << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << RED << "AMateria : Default destructor called" << RESET << std::endl;
	return ;
}

void AMateria::use(ICharacter &target)
{
	std::cout << BLUE << target.getName() << " use default materia" << RESET << std::endl;
}

const std::string	&AMateria::getType(void) const
{
	return (this->_type);
}

