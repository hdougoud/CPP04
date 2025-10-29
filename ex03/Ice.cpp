/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:42:01 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 19:26:55 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>
#include <new>
#include "AMateria.hpp"
#include "color.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << C_CSTR << "Ice : Default constructor called" << RESET << std::endl;
	return ;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
	std::cout << C_CSTR << "Ice : Copy constructor called" << RESET << std::endl;
	return ;
}

Ice	&Ice::operator=(const Ice &src)
{
	std::cout << C_ASNM << "Ice : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << C_DSTR << "Ice : Destructor called" << RESET << std::endl;
	return ;
}

AMateria	*Ice::clone(void) const
{
	AMateria	*newMateria;

	newMateria = new(std::nothrow) Ice();
	*(newMateria) = *(this);
	return (newMateria);
}
