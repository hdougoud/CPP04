/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:21 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 15:29:42 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <new>

int	main(void)
{
	{
		std::cout << "SUBJECT TEST" << std::endl;

		const Animal*	dog = new Dog();
		const Animal*	cat = new Cat();

		delete dog;
		delete cat;
	}
	{
		std::cout << "\nARRAY TEST" << std::endl;
		int		i = 0;
		Cat		*cat;
		Dog		*dog;
		Animal	*petShop[10];

		while (i < 5)
		{
			petShop[i] = new(std::nothrow) Dog;
			petShop[i + 5] = new(std::nothrow) Cat;
			if (petShop[i] || !petShop[i + 5])
				break;
			i++;
		}
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
			{
				petShop[i].getIdea();

			}
				
		}
		for (int i = 0; i < 10; i++)
		{
			if (petShop[i])
				delete petShop[i];
		}
	}
	return (0);
}
