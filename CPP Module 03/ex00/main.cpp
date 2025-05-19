/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:47:01 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 10:47:03 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapDefault;
    ClapTrap clap("CL4P-TP");

    clap.attack("Enemy");
    clap.takeDamage(3);
    clap.beRepaired(2);

    return 0;
}
