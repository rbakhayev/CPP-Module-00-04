/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:22:22 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:22:23 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "Costruttore di WrongAnimal chiamato" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type)
{
    std::cout << "Costruttore di copia di WrongAnimal chiamato" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "Operatore di assegnazione di WrongAnimal chiamato" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Distruttore di WrongAnimal chiamato" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Suono generico di WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return type;
}
