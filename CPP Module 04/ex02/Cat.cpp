/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:21:45 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:21:46 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal(), brain(new Brain())
{
    AAnimal::type = "Cat";
    std::cout << "Costruttore di Cat chiamato" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other), brain(new Brain(*(other.brain)))
{
    std::cout << "Costruttore di copia di Cat chiamato" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Operatore di assegnazione di Cat chiamato" << std::endl;
    if (this != &other)
    {
        AAnimal::operator=(other);
        brain = new Brain(*(other.brain));
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Distruttore di Cat chiamato" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Miao miao!" << std::endl;
}
