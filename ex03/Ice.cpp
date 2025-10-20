/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:01:32 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 21:16:14 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include "color.hpp"
#include "Character.hpp"

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

AMateria*	Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target) //const version ?
{
		std::cout << "hoots an ice bolt at " << target.getName() << std::endl;
}

