/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:39:51 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/30 16:00:59 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "color.hpp"

int main(void)
{
	{
		std::cout << F_UNDERLINED << F_BOLD << "\nLEAK TEST" << RESET << std::endl;
		const Animal* j = new(std::nothrow) Dog();
		if (!j)
			return (1);
		const Animal* i = new(std::nothrow) Cat();
		if (!i)
			return (delete(j), 1);

		delete j;
		delete i;
	}
	{
		std::cout << F_UNDERLINED << F_BOLD << "\nCAT COPY TEST" << RESET << std::endl;
		Cat		abyssian;
		Cat		persian;
		Cat		ragdoll(abyssian);

		persian = ragdoll;
		std::cout << abyssian.getAnIdea(0) << std::endl;
		std::cout << persian.getAnIdea(0) << std::endl;
		std::cout << ragdoll.getAnIdea(0) << std::endl;
		std::cout << BLUE << F_BOLD << "!! ITS NOON !!" << RESET << std::endl;
		persian.setAnIdea("I'm hungry !!", 0);
		ragdoll.setAnIdea("I'm going hunting", 0);
		std::cout << abyssian.getAnIdea(0) << std::endl;
		std::cout << persian.getAnIdea(0) << std::endl;
		std::cout << ragdoll.getAnIdea(0) << std::endl;
	}
	{
		std::cout << F_BOLD << F_UNDERLINED << "\nDOG COPY TEST" << RESET << std::endl;
		Dog		borderCollie;
		Dog		goldenRetriver;
		Dog		bullterrier(borderCollie);

		goldenRetriver = bullterrier;
		std::cout << borderCollie.getAnIdea(0) << std::endl;
		std::cout << goldenRetriver.getAnIdea(0) << std::endl;
		std::cout << bullterrier.getAnIdea(0) << std::endl;
		std::cout << BLUE << F_BOLD << "!! ITS NOON !!" << RESET << std::endl;
		goldenRetriver.setAnIdea("I'm hungry !!", 0);
		bullterrier.setAnIdea("I want to Play !!", 0);
		std::cout << borderCollie.getAnIdea(0) << std::endl;
		std::cout << goldenRetriver.getAnIdea(0) << std::endl;
		std::cout << bullterrier.getAnIdea(0) << std::endl;
	}
	{
		std::cout << F_BOLD << F_UNDERLINED << "\nARRAY TEST" << RESET << std::endl;
		Animal *petShop[8];

		for (int i = 0; i < 4; i++)
		{
			petShop[i] = new(std::nothrow) Cat;
			petShop[i + 4] = new(std::nothrow) Dog;
		}

		for(int i = 0; i < 8; i++)
		{
			if (petShop[i])
			{
				std::cout << petShop[i]->getType() << " ";
				petShop[i]->makeSound();
				delete petShop[i];
			}
		}
	}
	return (0);
}
