/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:51:44 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 16:39:42 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include "color.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << C_CSTR << "Dog : Default constructor called" << RESET << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << C_CSTR << "Dog : Copy constructor called" << RESET << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << C_ASNM << "Dog : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << C_DSTR << "Dog : Destructor called" << RESET << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark !!" << std::endl;
}
