/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:33 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 15:54:40 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "color.hpp"

class Animal
{
	public:
		Animal();
		Animal(const std::string &type);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();
		virtual void		makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string	_type;
};

#endif
