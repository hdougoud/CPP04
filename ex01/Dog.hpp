/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:25 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 10:16:43 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		Dog &operator=(const Dog &src);
		virtual ~Dog();
		virtual void makeSound(void) const;
		std::string	getIdea(int idx);
		void		setIdea(std::string idea, int idx);
	private:
		Brain	*_brain;
};

#endif
