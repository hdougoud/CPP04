/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:17:45 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/16 15:10:44 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "color.hpp"

ICharacter::ICharacter()
{
	std::cout << GREEN << "ICharacter : Default constructor called" << RESET << std::endl;
	return ;
}

ICharacter::ICharacter(const ICharacter &src)
{
	std::cout << GREEN << "ICharacter : Copy constructor called" << RESET << std::endl;
	return ;
}

ICharacter	&ICharacter::operator=(const ICharacter &src)
{
	if (this != &src)
	{

	}
	std::cout << BLUE << "ICharacter : Assignment operator called" << RESET << std::endl;
	return (*this);
}

