/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:51:44 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/28 16:12:59 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>
#include <new>
#include "color.hpp"

Dog::Dog() : Animal("Dog"), _brain(new(std::nothrow) Brain)
{
	std::cout << GREEN << "Dog : Default constructor called" << RESET << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new(std::nothrow) Brain(*(src._brain)))
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
		this->_brain = new(std::nothrow) Brain;
		if (this->_brain)
			*(this->_brain) = *(src._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << RED << "Dog : Destructor called" << RESET << std::endl;
	delete (this->_brain);
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark Bark !!" << std::endl;
}

void	Dog::setAnIdea(std::string idea, int idx)
{
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return ;
	}
	this->_brain->setIdea(idea, idx);
}

std::string	Dog::getAnIdea(int idx) const
{
	if (!this->_brain)
	{
		std::cout << RED << "This " << this->_type << " has no brain" << RESET << std::endl;
		return (0);
	}
	return (this->_brain->getIdea(idx));
}
