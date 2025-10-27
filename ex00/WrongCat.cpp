/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 18:30:30 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/27 21:58:24 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>
#include "color.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << GREEN << "WrongCat : Default constructor called" << RESET << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << GREEN << "WrongCat : Copy constructor called" << RESET << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	std::cout << BLUE << "WrongCat : Assignement operator called" << RESET << std::endl;
	if (this != &src)
	{
		WrongAnimal::operator=(src);
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat : Destructor called" << RESET << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Meoooooow" << std::endl;
}
