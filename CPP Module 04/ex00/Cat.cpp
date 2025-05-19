/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <rbakhaye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:11:21 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 16:41:34 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    Animal::type = "Cat";
    std::cout << "Costruttore di Cat chiamato" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Costruttore di copia di Cat chiamato" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Operatore di assegnazione di Cat chiamato" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Cat::~Cat()
{
    std::cout << "Distruttore di Cat chiamato" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miao miao!" << std::endl;
}
