/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:22:56 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 16:43:10 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <new>
#include <string>
#include "color.hpp"

Cat::Cat() : AAnimal("Cat"), _brain(new(std::nothrow) Brain)
{
	std::cout << C_CSTR << "Cat : Default constructor called" << RESET << std::endl;
	return ;
}

Cat::Cat(const Cat &src) : AAnimal(src), _brain(new(std::nothrow) Brain(*(src._brain)))
{
	std::cout << C_CSTR << "Cat : Copy constructor called" << RESET << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << C_ASNM << "Cat : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		AAnimal::operator=(src);
		if (this->_brain)
				*(this->_brain) = *(src._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << C_DSTR << "Cat : Destructor called" << RESET << std::endl;
	delete (this->_brain);
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoooow" << std::endl;
}

void	Cat::setAnIdea(std::string idea, int idx)
{
	if (idx < 0 || idx > 99)
	{
		std::cout << RED << "idx ouut of range" << RESET << std::endl;
		return ;
	}
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return ;
	}
	this->_brain->setIdea(idea, idx);
}

std::string	Cat::getAnIdea(int idx) const
{
	if (idx < 0 || idx > 99)
	{
		std::cout << RED << "idx ot ouf range" << RESET << std::endl;
		return (0);
	}
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return (0);
	}
	return (this->_brain->getIdea(idx));
}
