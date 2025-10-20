/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/03 10:14:21 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/20 15:16:27 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	{
		std::cout << "COPY TEST" << std::endl;
		const Animal	*labrador;
		const Animal	*hound;
		Animal			*bulldog;
		const Animal	*abyssinian;
		const Animal	*kanaani;
		Animal			*aegean;

		
	}
	{
		std::cout << "\nARRAY TEST" << std::endl;
		Animal *array[10];

		for(int i = 0; i < 5; i++)
		{
			array[i] = new Dog();
			array[i + 5] = new Cat();
		}
		for(int i = 0; i < 10; i++)
		{
			delete array[i];
		}
	}
	return (0);
}
