/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:21 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/17 17:55:17 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	{
		std::cout << "SUBJECT MAIN" << std::endl;
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		delete j;
		delete i;
	}
	{
		std::cout << "ARRAY TEST" << std::endl;
		Animal *array[10];

		for(int i = 0; i < 10; i++)
		{
			if (i < 5)
				array[i] = new Dog();
			else
				array[i] = new Cat();
		}
		for(int i = 0; i < 10; i++)
			delete array[i];
	}
	{
		std::cout << "\nDOG BRAIN TEST" << std::endl;
		Dog labrador;
		Dog	goldenRetrever;

		std::cout << labrador.getIdea(-1) << std::endl;
		std::cout << goldenRetrever.getIdea(0) << std::endl;
		labrador.setIdea("Sleep", 0);
		std::cout << labrador.getIdea(0) << std::endl;
		std::cout << goldenRetrever.getIdea(0) << std::endl;
	}
	{
		std::cout << "\nCAT BRAIN TEST" << std::endl;
		Cat	ragDoll;
		Cat	persian;

		std::cout << ragDoll.getIdea(0) << std::endl;
		std::cout << persian.getIdea(0) << std::endl;
		ragDoll.setIdea("purr", 0);
		std::cout << ragDoll.getIdea(0) << std::endl;
		std::cout << persian.getIdea(0) << std::endl;
	}
	return (0);
}
