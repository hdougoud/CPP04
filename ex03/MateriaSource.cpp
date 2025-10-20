/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:16:00 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 21:15:42 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "color.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materiaLearned[i] = NULL;
	std::cout << GREEN << "MateriaSource : Default constructor called" << RESET << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << GREEN << "MateriaSource : Copy constructor called" << RESET << std::endl;
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{

	}
	std::cout << BLUE << "MateriaSource : Assignment operator called" << RESET << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << RED << "MateriaSource : Default destructor called" << RESET << std::endl; 
	return ;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if(!this->_materiaLearned[i])
		{
			*(this->_materiaLearned[i]) = *(materia);
			delete materia;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{

}
