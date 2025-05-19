/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <rbakhaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:16:36 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 16:51:54 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	

	delete j;
	delete i;
	
	std::cout << "------------------------------------------------------\n" << std::endl;
	const Animal *animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	for ( int i = 0; i < 4; i++ )
		delete animals[i];
	
	std::cout << "-------------------\n" << std::endl;
	
	Cat cat1;
	cat1.makeSound(); 
	Cat cat2 = cat1; 
	cat2.makeSound(); 
	

	return 0;
}

