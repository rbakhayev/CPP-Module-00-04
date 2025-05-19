/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:15:49 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:15:50 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Costruttore di default
Brain::Brain()
{
    std::cout << "Costruttore di Brain chiamato" << std::endl;
}

// Costruttore di copia
Brain::Brain(const Brain &other)
{
    std::cout << "Costruttore di copia di Brain chiamato" << std::endl;
    *this = other;
}

// Operatore di assegnazione
Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Operatore di assegnazione di Brain chiamato" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            ideas[i] = other.ideas[i];
    }
    return *this;
}

// Distruttore
Brain::~Brain()
{
    std::cout << "Distruttore di Brain chiamato" << std::endl;
}
