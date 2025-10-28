/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:22:56 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/28 16:12:29 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>
#include <new>
#include <string>
#include "color.hpp"

Cat::Cat() : Animal("Cat"), _brain(new(std::nothrow) Brain)
{
	std::cout << GREEN << "Cat : Default constructor called" << RESET << std::endl;
	return ;
}

Cat::Cat(const Cat &src) : Animal(src), _brain(new(std::nothrow) Brain(*(src._brain)))
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
		this->_brain = new(std::nothrow) Brain;
		if (_brain)
			*(this->_brain) = *(src._brain);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << RED << "Cat : Destructor called" << RESET << std::endl;
	delete (this->_brain);
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meoooow" << std::endl;
}

void	Cat::setAnIdea(std::string idea, int idx)
{
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return ;
	}
	this->_brain->setIdea(idea, idx);
}

std::string	Cat::getAnIdea(int idx) const
{
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return (0);
	}
	return (this->_brain->getIdea(idx));
}
