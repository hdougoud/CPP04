/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:17:38 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/02 20:20:24 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>
#include <new>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "color.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << C_CSTR << "Cure : Default constructor called" << RESET << std::endl;
	return ;
}

Cure::Cure(const Cure &src) : AMateria(src)
{
	//std::cout << C_CSTR << "Cure : Copy constructor called" << RESET << std::endl;
	return ;
}

Cure	&Cure::operator=(const Cure &src)
{
	//std::cout << C_CSTR << "Cure : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		AMateria::operator=(src);
	}
	return (*this);
}

Cure::~Cure()
{
	//std::cout << C_DSTR << "Cure : Destructor called" << RESET << std::endl;
	return ;
}

AMateria	*Cure::clone(void) const
{
	AMateria	*newMateria;

	newMateria = new(std::nothrow) Cure();
	if (newMateria)
		*(newMateria) = *(this);
	return (newMateria);
}

void	Cure::use(ICharacter &target)
{
	std::cout << BLUE << F_BOLD << "* heals " << target.getName() << "’s wounds *" << RESET << std::endl;
}
