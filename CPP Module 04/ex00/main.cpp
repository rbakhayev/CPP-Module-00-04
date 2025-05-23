/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:11:53 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:11:54 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl; 
	j->makeSound();
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound();
	std::cout << meta->getType() << " " << std::endl; 
	meta->makeSound();
	
	delete meta; 
	delete i; 
	delete j;
	
	std::cout << "--------------\n" << std::endl;
	
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete  wrongAnimal;
	delete  wrongCat;

}
