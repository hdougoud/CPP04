/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:36:34 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/15 18:12:55 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "color.hpp"

IMateriaSource::IMateriaSource()
{
	std::cout << GREEN << "IMateriaSource : Default constructor called" << RESET << std::endl;
	return ;
}

IMateriaSource::IMateriaSource(const IMateriaSource &src)
{
	std::cout << GREEN << "IMateriaSource : Copy constructor called" << RESET << std::endl;
	return ;
}

IMateriaSource	&IMateriaSource::operator=(const IMateriaSource &src)
{
	if (this != &src)
	{

	}
	std::cout << BLUE << "IMateriaSource : Assignment operator called" << RESET << std::endl;
	return (*this);
}

