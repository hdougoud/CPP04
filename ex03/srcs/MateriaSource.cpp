/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:59:57 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/02 21:32:57 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>
#include <new>
#include "AMateria.hpp"
#include "color.hpp"
#include "Cure.hpp"
#include "Floor.hpp"
#include "Ice.hpp"

MateriaSource::MateriaSource()
{
	//std::cout << C_CSTR << "MateriaSource : Default constructor called" << RESET << std::endl;
	for(int i = 0; i < LEARNED_SIZE; i++)
		this->_materiaLearned[i] = 0;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	//std::cout << C_CSTR << "MateriaSource : Copy constructor called" << RESET << std::endl;
	for (int i = 0; i < LEARNED_SIZE; i++)
	{
		if (this->_materiaLearned[i])
			delete (this->_materiaLearned[i]);
		this->_materiaLearned[i] = 0;
		if (src._materiaLearned[i])
			this->_materiaLearned[i] = src._materiaLearned[i]->clone();
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &src)
{
	//std::cout << C_ASNM << "MateriaSource : Assignment operator called" << RESET << std::endl;
	if (this != &src)
	{
		for (int i = 0; i < LEARNED_SIZE; i++)
		{
			this->_materiaLearned[i] = 0;
			if (src._materiaLearned[i])
				this->_materiaLearned[i] = src._materiaLearned[i]->clone();
		}
	}
	return *(this);
}

MateriaSource::~MateriaSource()
{
	//std::cout << C_DSTR << "MateriaSource : Destructor called" << RESET << std::endl;
	for (int i = 0; i < LEARNED_SIZE; i++)
		delete this->_materiaLearned[i];
	return ;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
	{
		std::cout << RED << "Impossible to learn an empty Materia" << RESET << std::endl;
		return ;
	}
	for (int i = 0; i < LEARNED_SIZE; i++)
	{
		if (!this->_materiaLearned[i])
		{
			this->_materiaLearned[i] = materia->clone();
			delete (materia);
			return ;
		}
	}
	std::cout << YELLOW << "Learning capacity is saturated" << RESET << std::endl;
	(Floor::getInstance()).dropMateria(materia);
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < LEARNED_SIZE; i++)
	{
		if (this->_materiaLearned[i] && this->_materiaLearned[i]->getType() == type)
			return (this->_materiaLearned[i]->clone());
	}
	std::cout << YELLOW << type << "-type Materia does not exist" << RESET << std::endl;
	return (0);
	
}
