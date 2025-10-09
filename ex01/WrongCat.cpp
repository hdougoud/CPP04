/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:13:03 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/09 15:34:32 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat : Default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat : Copy constructor called" << std::endl;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	std::cout << "WrongCat : Assignment operator called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat : Default destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong meeeoooows" << std::endl;
}
