/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:08:59 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 15:32:19 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &src);
		virtual ~AAnimal();
		virtual void		makeSound(void) const = 0;
		virtual std::string	getType(void) const;
		virtual std::string	getAnIdea(int idx) const = 0;
		virtual void		setAnIdea(std::string idea, int idx) = 0;
	protected:
		std::string _type;
};

#endif
