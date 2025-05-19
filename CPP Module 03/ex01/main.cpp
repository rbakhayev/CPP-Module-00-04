/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:54:17 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 10:54:20 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    // Test del costruttore predefinito
    ScavTrap scavDefault;
    scavDefault.guardGate();
    std::cout <<"--------------------------------------"<<std::endl;
    // Test del costruttore con nome
    ScavTrap scav("Scav");
    scav.attack("enemy");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();

    return 0;
}

