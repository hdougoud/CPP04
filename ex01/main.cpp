/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:21 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/21 16:51:22 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

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
		Animal	*petShop[8];

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
			i++;
		}
		for (int i = 0; i < 8; i++)
		{
			if (petShop[i])
				delete petShop[i];
		}
	}
	{
		std::cout << "\nDEEP COPY TEST" << std::endl;
		Dog	labrador;
		Dog	goldenRetriver;
		Cat	abyssin;
		Cat	burmilla;

		std::cout << labrador.getIdea(0) << std::endl;
		std::cout << goldenRetriver.getIdea(0) << std::endl;
		std::cout << abyssin.getIdea(0) << std::endl;
		std::cout << burmilla.getIdea(0) << std::endl;
		std::cout << BLUE << "Its noon" << RESET << std::endl;
		labrador.setIdea("I'm hungry", 0);
		abyssin.setIdea("I want my croquettes", 0);
		std::cout << labrador.getIdea(0) << std::endl;
		std::cout << goldenRetriver.getIdea(0) << std::endl;
		std::cout << abyssin.getIdea(0) << std::endl;
		std::cout << burmilla.getIdea(0) << std::endl;
	}
	return (0);
}

