/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:27 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/17 17:58:52 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain)
{
	std::cout << GREEN << "Dog : Default constructor called" << RESET << std::endl;
	return ;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	this->_brain = new Brain(*(src._brain));
	std::cout << GREEN << "Dog : Copy constructor called" << RESET << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		*(this->_brain) = *(src._brain);
		this->_type = src._type;
	}
	std::cout << BLUE << "Dog : Assignment operator called" << RESET << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << RED << "Dog : Default destructor called" << RESET << std::endl;
	return ;
}

void	Dog::makeSound() const
{
	std::cout << "Bark !" << std::endl;
}

std::string	Dog::getIdea(int idx)
{
	if (idx < 0 || idx > 100)
	{
		std::cout << RED << "Value out of range" << RESET << std::endl;
		return "";
	}
	return (this->_brain->getAnIdea(idx));
}

void	Dog::setIdea(std::string idea, int idx)
{
	if (idx < 0 || idx > 100)
	{
		std::cout << RED << "Value out of range" << RESET << std::endl;
		return ;
	}
	this->_brain->setAnIdea(idx, idea);
}
