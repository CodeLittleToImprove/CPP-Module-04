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
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	return 0;
}

// int main()
// {
// 	const Cat *cat = new Cat();
// 	cat->setIdea(0, "Attack feet at 3 AM");
// 	std::cout << "Cat idea 0: " << cat->getIdea(0) << std::endl;
// 	delete cat;
//
// 	const Dog *dog = new Dog();
// 	dog->setIdea(0, "Roar for no reason");
// 	std::cout << "Dog idea 0: " << dog->getIdea(0) << std::endl;
// 	delete dog;
// 	return (0);
// }