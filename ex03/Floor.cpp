/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 17:51:03 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 23:09:29 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.hpp"
#include "Floor.hpp"
#include "AMateria.hpp"

Floor::Floor() : _materia(NULL), _next(NULL), _prev(NULL)
{
	_first = this;
	_last = this;
	std::cout << GREEN << "Floor : Default constrctuor called" << std::endl;
	return ;
}

Floor::Floor(AMateria *materia) : _materia(materia), _next(NULL)
{
	std::cout << GREEN << "Floor : Ordinary constructor called" << std::endl;
	if (!_first && !_last)
	{
		_first = this;
		_last = this;
		this->_prev = NULL;
		return ;
	}
	this->_prev = _last;
	_last = this;
	return ;
}

Floor::Floor(const Floor &src) : _materia(src._materia), _next(src._next), _prev(src._prev)
{
	std::cout << GREEN << "Floor : Copy constructor called" << std::endl;
	return ;
}

Floor	&Floor::operator=(const Floor &src)
{
	if (this != &src)
	{
		this->_next = src._next;
		this->_prev	= src._prev;
		this->_materia = src._materia;
	}
	std::cout << BLUE << "Floor : Assignment operator called" << std::endl;
	return (*this);
}

Floor::~Floor()
{
	std::cout << RED << "Floor : Default destructor called" << std::endl;
	return ;
}
