/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbui-quo <tbui-quo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:11:14 by tbui-quo          #+#    #+#             */
/*   Updated: 2025/04/24 17:44:30 by tbui-quo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// int main()
// {
// 	const Cat* meta = new Cat();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
//
// 	return 0;
// }

int main()
{
	std::cout << "\n--- Proper Polymirphism ---\n" << std::endl;
	const Animal *animals[3];
	animals[0] = new Dog();
	animals[1] = new Cat();
	animals[2] = new Animal();

	std::cout << "\nCalling makeSound():\n";
	for (int i = 0; i < 3; ++i)
		{
		std::cout << animals[i]->getType() << " says: ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < 3; ++i)
		delete animals[i];

	std::cout << "\n--- Incorect Polymorphism (Missing virtual) ---\n" << std::endl;
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << "\nCalling makeSound():\n";
	std::cout << "WrongCat as WrongAnimal says: ";
	wrongCat->makeSound();

	// delete wrongCat; //Undefined behavior if ~WrongAnimal is not virtual

	return 0;
}