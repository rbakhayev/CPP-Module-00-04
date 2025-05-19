/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:10:56 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:10:58 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string humanName) : name(humanName), weapon(0) {}

HumanB::~HumanB(void) {};

void HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks unarmed" << std::endl;
}

void HumanB::setWeapon(Weapon &humanWeapon)
{
    weapon = &humanWeapon;
}
