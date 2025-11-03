/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongMain.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:40:37 by hdougoud          #+#    #+#             */
/*   Updated: 2025/10/29 16:31:01 by hdougoud         ###   ########.fr       */
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
	std::cout << F_UNDERLINED << F_BOLD << "\nLEAK TEST" << RESET << std::endl;
	const AAnimal* k = new(std::nothrow) AAnimal();
	if (!k)
		return (1);
	const AAnimal* j = new(std::nothrow) Dog();
	if (!j)
		return (delete(k), 1);
	const AAnimal* i = new(std::nothrow) Cat();
	if (!i)
		return (delete(k), delete(j), 1);

	delete k;
	delete j;
	delete i;
}
