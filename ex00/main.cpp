/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 10:39:51 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/27 23:32:55 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <new>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal		*animal;
	const Animal		*cat;
	const Animal		*dog;
	const WrongAnimal	*wrongAnimal;
	const WrongAnimal	*wrongCat;

	animal = new(std::nothrow) Animal;
	if (!animal)
		return(1);
	std::cout << animal->getType() << " make ";
	animal->makeSound(); 
	delete animal;

	std::endl(std::cout);
	cat = new(std::nothrow) Cat;
	if (!cat)
		return (1);
	std::cout << cat->getType() << " ";
	cat->makeSound();
	delete cat;

	std::endl(std::cout);
	dog = new(std::nothrow) Dog;
	if (!dog)
		return (1);
	std::cout << dog->getType() << " ";
	dog->makeSound();
	delete dog;

	std::endl(std::cout);
	wrongAnimal = new(std::nothrow) WrongAnimal;
	if (!wrongAnimal)
		return (1);
	std::cout << wrongAnimal->getType() << " make ";
	wrongAnimal->makeSound();
	delete wrongAnimal;

	std::endl(std::cout);
	wrongCat = new(std::nothrow) WrongCat;
	if (!wrongCat)
		return (1);
	std::cout << wrongCat->getType() << " make ";
	wrongCat->makeSound();
	delete wrongCat;

	return (0);
}
