/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:08:59 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/27 21:30:48 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &src);
		Animal &operator=(const Animal &src);
		virtual ~Animal();
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
	protected:
		std::string _type;
};

#endif
