/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:16:00 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 13:36:44 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IMateriaSource.hpp"
#include "color.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materiaLearned[i] = NULL;
	std::cout << GREEN << "MateriaSource : Default constructor called" << RESET << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	(void) src;
	for (int i = 0; i < 4; i++)
	{
		return ;
	}
	std::cout << GREEN << "MateriaSource : Copy constructor called" << RESET << std::endl;
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
	if (this != &src)
	{
		return (*this);
	}
	std::cout << BLUE << "MateriaSource : Assignment operator called" << RESET << std::endl;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaLearned[i])
			delete this->_materiaLearned[i];
	}
	std::cout << RED << "MateriaSource : Default destructor called" << RESET << std::endl; 
	return ;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int i = 0;

	if (!materia)
	{
		std::cout << RED << "learnMateria : materia does not exist" << RESET << std::endl;
		return ;
	}
	while (i < 4)
	{
		if(!this->_materiaLearned[i])
		{
			this->_materiaLearned[i] = materia;
			//delete materia;
			return ;
		}
		i++;
	}
	if (i == 4)
		std::cout << BLUE << "this MateriaSource is full" << RESET << std::endl;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	AMateria	*newMateria;

	newMateria = NULL;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaLearned[i]->getType() == type)
			return (newMateria = this->_materiaLearned[i]->clone());
	}
	return (newMateria);
}
