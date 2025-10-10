/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:31 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 10:14:32 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain)
{
	this->_type = "Cat";
	std::cout << "Cat : Default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	this->brain = new Brain(*(src.brain));
	std::cout << "Cat : Copy Constructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		*(this->brain) = *(src.brain);
		this->_type = src._type;
	}
	std::cout << "Cat : Assignment operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat : Default destructor called" << std::endl;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "Meeeeooooows" << std::endl;
}

std::string	Cat::getIdea(int idx)
{
	return (this->brain->_ideas[idx]);
}

void	Cat::setIdea(std::string idea, int idx)
{
	this->brain->_ideas[idx] = idea;
}
