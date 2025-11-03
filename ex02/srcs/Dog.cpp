/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:51:44 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 16:43:32 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <new>
#include "color.hpp"

Dog::Dog() : AAnimal("Dog"), _brain(new(std::nothrow) Brain)
{
	std::cout << C_CSTR << "Dog : Default constructor called" << RESET << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : AAnimal(src), _brain(new(std::nothrow) Brain(*(src._brain)))
{
	std::cout << C_CSTR << "Dog : Copy constructor called" << RESET << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << C_ASNM << "Dog : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		AAnimal::operator=(src);
		if (this->_brain)
			*(this->_brain) = *(src._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << C_DSTR << "Dog : Destructor called" << RESET << std::endl;
	delete (this->_brain);
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark !!" << std::endl;
}

void	Dog::setAnIdea(std::string idea, int idx)
{
	if (idx < 0 || idx > 99)
	{
		std::cout << RED << "idx out of range" << RESET << std::endl;
		return ;
	}
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return ;
	}
	this->_brain->setIdea(idea, idx);
}

std::string	Dog::getAnIdea(int idx) const
{
	if (idx < 0 || idx > 99)
	{
		std::cout << RED << "idx out of range" << RESET << std::endl;
		return (0);
	}
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return (0);
	}
	return (this->_brain->getIdea(idx));
}
