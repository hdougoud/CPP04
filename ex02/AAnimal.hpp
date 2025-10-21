/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:33 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 18:22:41 by hdougoud         ###   ########.fr       */
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
		virtual std::string	getIdea(int idx) const = 0;
		virtual void		setIdea(std::string idea, int idx) = 0;
		std::string			getType(void) const;
	protected:
		std::string	_type;
};

#endif
