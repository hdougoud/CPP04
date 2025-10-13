/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:40:13 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/09 17:40:14 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "color.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "EAT !!!";
	std::cout << GREEN << "Brain : Default constructor called" << RESET << std::endl;
}

Brain::Brain(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout << GREEN << "Brain : Copy constructor called" << RESET << std::endl;
}

Brain	&Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	}
	std::cout << BLUE << "assignment operator called" << RESET << std::endl;
	return (*this);
}

Brain::~Brain()
{
	std::cout << RED << "Brain : Default destructor called" << RESET << std::endl;
}

