/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:11:36 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:11:38 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    Animal::type = "Dog";
    std::cout << "Costruttore di Dog chiamato" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Costruttore di copia di Dog chiamato" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Operatore di assegnazione di Dog chiamato" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Dog::~Dog()
{
    std::cout << "Distruttore di Dog chiamato" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Bau bau!" << std::endl;
}
