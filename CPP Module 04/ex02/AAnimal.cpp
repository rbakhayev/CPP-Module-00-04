/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:21:12 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:21:13 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal")
{
    std::cout << "Costruttore di AAnimal chiamato" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other) : type(other.type)
{
    std::cout << "Costruttore di copia di AAnimal chiamato" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    std::cout << "Operatore di assegnazione di Animal chiamato" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "Distruttore di AAnimal chiamato" << std::endl;
}

void AAnimal::makeSound() const
{
    std::cout << "Suono generico di AAnimal" << std::endl;
}

std::string AAnimal::getType() const
{
    return type;
}
