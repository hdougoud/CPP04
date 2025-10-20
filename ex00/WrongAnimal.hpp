/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 15:08:07 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 14:05:43 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include "color.hpp"

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &src);
		virtual ~WrongAnimal();
		void		makeSound(void) const;
		std::string	getType(void) const;
	protected:
		std::string	_type;
};

#endif
