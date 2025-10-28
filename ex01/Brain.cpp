/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:02:54 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/28 12:58:58 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include "color.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Sleep !!!";
	std::cout << GREEN << "Brain : Default constructor called" << RESET << std::endl;
	return ;
}

Brain::Brain(const Brain &src)
{
	copyIdeas(src);
	std::cout << GREEN << "Brain : Copy constructor called" << RESET << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &src)
{
	std::cout << BLUE << "Brain : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		copyIdeas(src);
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Brain : Destructor called" << RESET << std::endl;
	return ;
}

void	Brain::copyIdeas(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

void	Brain::setIdea(const std::string &idea, int idx)
{
	this->_ideas[idx] = idea;
}

std::string	Brain::getIdea(int idx) const
{
	return (this->_ideas[idx]);
}
