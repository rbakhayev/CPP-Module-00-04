/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:07:42 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:07:44 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    int numZombies = 5;
    horde = zombieHorde(numZombies, "Rostik");

    for (int i = 0; i < numZombies; i++)
        horde[i].announce();
    delete[] horde;
    return 0;
}
