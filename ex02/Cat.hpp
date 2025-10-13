/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:29 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 10:16:23 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &src);
		virtual ~Cat();
		virtual void makeSound(void) const;
		void		setIdea(std::string idea, int idx);
		std::string	getIdea(int idx);
	private:
		Brain	*_brain;
};

#endif
