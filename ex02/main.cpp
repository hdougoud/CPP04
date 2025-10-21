/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:21 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 18:19:26 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	{
		std::cout << "SUBJECT TEST" << std::endl;

		const AAnimal*	dog = new Dog();
		const AAnimal*	cat = new Cat();

		delete dog;
		delete cat;
	}
	{
		std::cout << "\nARRAY TEST" << std::endl;
		AAnimal	*petShop[8];

		for (int i = 0; i < 8; i++)
		{
			if (i < 4)
				petShop[i] = new(std::nothrow) Dog;
			else
				petShop[i] = new(std::nothrow) Cat;
			if (!petShop[i])
			{
				std::cout << RED << "Function \"new\" failed" << RESET << std::endl;
				break;
			}
		}
		std::cout << petShop[5]->getIdea(0);
		for (int i = 0; i < 8; i++)
		{
			if (petShop[i])
				delete petShop[i];
		}
	}
	return (0);
}

