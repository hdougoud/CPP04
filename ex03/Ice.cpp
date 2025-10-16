/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:01:32 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/16 16:10:06 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "color.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << GREEN << "Ice : Default constructor called" << RESET << std::endl;
	return ;
}

	Ice::Ice(const Ice &src) : AMateria(src)
{
	std::cout << GREEN << "Ice : Copy constructor called" << RESET << std::endl;
	return ;
}

Ice	&Ice::operator=(const Ice &src)
{
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	std::cout << BLUE << "Ice : Assignment operator called" << RESET << std::endl;
	return (*this);
}

Ice::~Ice()
{
	std::cout << RED << "Ice : Default destructor called" << RESET << std::endl;
	return ;
}

AMateria*	Ice::clone(void)
{
	Ice *ptr = new(std::nothrow) Ice;
	if (!ptr)
		return (NULL);
}

