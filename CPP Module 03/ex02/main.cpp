/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:20:29 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 11:20:30 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    // Test del costruttore predefinito di ClapTrap
    ClapTrap clapDefault;
    clapDefault.attack("enemyClapDefault");
    clapDefault.takeDamage(3);
    clapDefault.beRepaired(2);
    std::cout <<"--------------------------------------"<<std::endl;
    // Test del costruttore con nome di ClapTrap
    ClapTrap clap("Clap");
    clap.attack("enemyClap");
    clap.takeDamage(30);
    clap.beRepaired(15);
    std::cout <<"--------------------------------------"<<std::endl;
    // Test del costruttore predefinito di ScavTrap
    ScavTrap scavDefault;
    scavDefault.attack("enemyscavDefault");
    scavDefault.takeDamage(30);
    scavDefault.beRepaired(15);
    scavDefault.guardGate();
    std::cout <<"--------------------------------------"<<std::endl;
    // Test del costruttore con nome di ScavTrap
    ScavTrap scav("Scav");
    scav.attack("enemyScav");
    scav.takeDamage(30);
    scav.beRepaired(15);
    scav.guardGate();
    std::cout <<"--------------------------------------"<<std::endl;
    // Test del costruttore predefinito di FragTrap
    FragTrap fragDefault;
    fragDefault.attack("enemyFragDefault");
    fragDefault.takeDamage(30);
    fragDefault.beRepaired(15);
    fragDefault.highFivesGuys();
    std::cout <<"--------------------------------------"<<std::endl;
    // Test del costruttore con nome di FragTrap
    FragTrap frag("Frag");
    frag.attack("enemyFrag");
    frag.takeDamage(30);
    frag.beRepaired(15);
    frag.highFivesGuys();

    return 0;
}



