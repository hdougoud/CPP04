/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 20:11:17 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 21:18:39 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "color.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << GREEN << "Cure : Default constructor called" << RESET << std::endl;
	return ;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	std::cout << GREEN << "Cure : Copy constructor called" << RESET << std::endl;
	return ;
}

Cure	&Cure::operator=(const Cure &src)
{
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	std::cout << BLUE << "Cure : Assignment operator called" << RESET << std::endl;
	return (*this);
}

Cure::~Cure()
{
	std::cout << RED << "Cure : Default destructor called" << RESET << std::endl;
	return ;
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heal " << target.getName() << "'s wounds *" << std::endl;
}

