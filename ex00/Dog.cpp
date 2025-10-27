/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:51:44 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/28 00:23:06 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include "color.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << GREEN << "Dog : Default constructor called" << RESET << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << GREEN << "Dog : Copy constructor called" << RESET << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << BLUE << "Dog : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog : Destructor called" << RESET << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark !!" << std::endl;
}
