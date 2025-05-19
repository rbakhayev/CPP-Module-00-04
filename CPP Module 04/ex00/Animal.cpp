/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:11:04 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:11:05 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Costruttore di Animal chiamato" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type)
{
    std::cout << "Costruttore di copia di Animal chiamato" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Operatore di assegnazione di Animal chiamato" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Distruttore di Animal chiamato" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Suono generico di Animal" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
