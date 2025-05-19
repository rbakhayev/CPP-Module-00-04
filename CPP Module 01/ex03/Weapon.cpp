/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:11:34 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:11:35 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weaponType) : type(weaponType) {}

Weapon::~Weapon(void) {};

const std::string &Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string newType)
{
    type = newType;
}
