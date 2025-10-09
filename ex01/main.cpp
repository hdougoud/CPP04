/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:21 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/03 15:52:26 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal *generic = new Animal();
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	const Dog dog2()
	std::cout << std::endl;

	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << generic->getType() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	generic->makeSound();

	std::cout << std::endl;
	delete(cat);
	delete(dog);
	delete(generic);
	return (0);
}
