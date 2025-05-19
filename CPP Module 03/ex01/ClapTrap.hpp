/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 10:53:59 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 10:54:01 by rbakhaye         ###   ########.fr       */
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

    protected:
            std::string name;
            unsigned int hitPoints;
            unsigned int energyPoints;
            unsigned int attackDamage;
};

#endif
