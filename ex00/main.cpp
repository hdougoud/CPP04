/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:21 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/19 20:49:30 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <new>

int	main(void)
{
	const Animal		*animal;
	const Animal		*cat;
	const Animal		*dog;
	const WrongAnimal	*wrongAnimal;
	const WrongAnimal	*wrongCat;

	std::cout << std::endl;
	animal = new(std::nothrow) Animal;
	if (!animal)
		return (1);
	std::cout << "The " << animal->getType() << " make ";
	animal->makeSound();
	delete animal;

	std::cout << std::endl;
	cat = new(std::nothrow) Cat;
	if (!cat)
		return(1);
	std::cout << "The " << cat->getType() << " ";
	cat->makeSound();
	delete cat;
	
	std::cout << std::endl;
	dog = new(std::nothrow) Dog;
	if (!dog)
		return (1);
	std::cout << "The " << dog->getType() << " ";
	dog->makeSound();
	delete dog;

	std::cout << std::endl;
	wrongAnimal = new(std::nothrow) WrongAnimal;
	if (!wrongAnimal)
		return (1);
	std::cout << "The " << wrongAnimal->getType() << " make ";
	wrongAnimal->makeSound();
	delete wrongAnimal;

	std::cout << std::endl;
	wrongCat = new(std::nothrow) WrongCat;
	if (!wrongCat)
		return (1);
	std::cout << "The " << wrongCat->getType() << " make ";
	wrongCat->makeSound();
	delete wrongCat;
	
	return (0);
}
