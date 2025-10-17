/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:31 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/17 17:58:29 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : _brain(new Brain)
{
	this->_type = "Cat";
	std::cout << GREEN << "Cat : Default constructor called" << RESET << std::endl;
	return ;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	this->_brain = new Brain(*(src._brain));
	std::cout << GREEN << "Cat : Copy Constructor called" << RESET << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		*(this->_brain) = *(src._brain);
		this->_type = src._type;
	}
	std::cout << BLUE << "Cat : Assignment operator called" << RESET << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << RED << "Cat : Default destructor called" << RESET <<std::endl;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeeooooows" << std::endl;
}

std::string	Cat::getIdea(int idx)
{
	if (idx < 0 || idx > 100)
	{
		std::cout << RED << "Value out of range" << RESET << std::endl;
		return "";
	}
	return (this->_brain->getAnIdea(idx));
}

void	Cat::setIdea(std::string idea, int idx)
{
	if (idx < 0 || idx > 100)
	{
		std::cout << RED << "Value out of range" << RESET << std::endl;
		return ;
	}
	this->_brain->setAnIdea(idx, idea);
}
