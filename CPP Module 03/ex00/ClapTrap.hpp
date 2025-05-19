/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:46:46 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 10:46:47 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
            ClapTrap(void);
            ClapTrap(const std::string &name);
            ClapTrap(const ClapTrap &other);
            ClapTrap &operator=(const ClapTrap &other);
            ~ClapTrap(void);

            void attack(const std::string &target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);

    private:
            std::string name;
            unsigned int hitPoints;
            unsigned int energyPoints;
            unsigned int attackDamage;
};

#endif
