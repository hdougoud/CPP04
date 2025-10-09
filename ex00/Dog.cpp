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

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog : Default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog : Copy constructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		this->_type = src._type;
	}
	std::cout << "Dog : Assignment operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog : Default destructor called" << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Bark !" << std::endl;
}
