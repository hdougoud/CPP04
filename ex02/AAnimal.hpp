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

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include "color.hpp"

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const std::string &type);
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();
		virtual void		makeSound(void) const = 0;
		std::string	getType(void) const;
	protected:
		std::string	_type;
};

#endif
