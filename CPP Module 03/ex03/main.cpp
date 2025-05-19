/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 11:38:54 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 11:38:57 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    DiamondTrap rob1("ROB1");
    DiamondTrap rob2("ROB2");
    DiamondTrap rob3("ROB3");
    std::cout <<"--------------------------------------"<<std::endl;
    rob1.whoAmI();
    rob2.whoAmI();
    rob3 = rob2;
    rob3.whoAmI();
    std::cout <<"--------------------------------------"<<std::endl;
    rob1.attack("enemy");
    rob1.takeDamage(10);
    rob1.beRepaired(10);

    return 0;
}




