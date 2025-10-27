/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:22:56 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/27 21:55:28 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include "color.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << GREEN << "Cat : Default constructor called" << RESET << std::endl;
	return ;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << GREEN << "Cat : Copy constructor called" << RESET << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << BLUE << "Cat : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		Animal::operator=(src);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Cat : Destructor called" << RESET << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoooow" << std::endl;
}
