/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:22:35 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:22:36 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    WrongAnimal::type = "WrongCat";
    std::cout << "Costruttore di WrongCat chiamato" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other)
{
    std::cout << "Costruttore di copia di WrongCat chiamato" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "Operatore di assegnazione di WrongCat chiamato" << std::endl;
    if (this != &other)
        WrongAnimal::operator=(other);
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Distruttore di WrongCat chiamato" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Suono generico di WrongCat" << std::endl;
}
