/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdougoud <hdougoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:00:29 by hdougoud          #+#    #+#             */
/*   Updated: 2025/11/06 01:44:35 by hdougoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "color.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void subject_provided_test()
{
	std::cout << F_BOLD << F_UNDERLINED << "\nSUBJECT PROVIDED TEST" << RESET << std::endl;

	AMateria		*tmp;
	ICharacter		*me = new Character("me");
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
}

void copy_constructor_test()
{
	std::cout << F_BOLD << F_UNDERLINED << "\nCOPY CONSTRUCTOR TEST" << RESET << std::endl;
	AMateria		*tmp;
	Character		me("me");
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me.equip(tmp);
	tmp = src->createMateria("cure");
	me.equip(tmp);

	Character copy(me);
	me.unequip(0);
	me.use(0, copy);
	copy.use(0, me);

	delete src;
}

void assignment_operator_test()
{
	std::cout << F_BOLD << F_UNDERLINED << "\nASSIGNMENT OPERATOR TEST" << RESET << std::endl;

	AMateria		*tmp;
	Character		me("me");
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	me.equip(tmp);
	tmp = src->createMateria("cure");
	me.equip(tmp);

	Character copy;
	copy = me;
	me.unequip(0);
	me.use(0, copy);
	copy.use(0, me);

	delete src;
}

void invalid_arguments_test()
{
	std::cout << F_BOLD << F_UNDERLINED << "\nINVALID ARGUMENTS" << RESET << std::endl;

	AMateria		*tmp;
	ICharacter		*me = new Character("me");
	IMateriaSource	*src = new MateriaSource();

	tmp = src->createMateria("ice");
	src->learnMateria(new Ice());
	src->learnMateria(0);
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("nonexistant");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	me->unequip(-1);
	me->unequip(5);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(-1, *bob);
	me->use(4, *bob);
	bob->unequip(2);

	delete bob;
	delete me;
	delete src;
}

void	floor_limit_test(void)
{
	std::cout << F_BOLD << F_UNDERLINED << "\nFLOOR LIMTS" << RESET << std::endl;

	ICharacter	*leo = new Character("Leo");

	for(int i = 0; i < 97; i++)
	{
		leo->equip(new Ice());
		leo->unequip(0);
	}

	delete (leo);
}

int main()
{
	subject_provided_test();
	copy_constructor_test();
	assignment_operator_test();
	invalid_arguments_test();
	floor_limit_test();
	return (0);
}
