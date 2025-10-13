/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:27 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 10:14:28 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
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
	if (this != &src)
	{
		this->_type = src._type;
	}
	std::cout << BLUE << "Dog : Assignment operator called" << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog : Default destructor called" << RESET << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Bark !" << std::endl;
}
