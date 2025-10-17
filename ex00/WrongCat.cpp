/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:13:03 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/17 10:39:34 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

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

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	std::cout << BLUE << "WrongCat : Assignment operator called" << RESET << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat : Default destructor called" << RESET << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "meeeoooows" << std::endl;
}
