/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:10:51 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:10:52 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
            std::string name;
            Weapon *weapon;
    public:
            HumanB(std::string name);
            ~HumanB(void);
            void    attack(void);
            void    setWeapon(Weapon &humanWeapon);
};

#endif
