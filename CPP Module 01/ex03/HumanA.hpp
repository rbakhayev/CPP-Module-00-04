/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:10:36 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:10:38 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    private:
            std::string name;
            Weapon &weapon;
    public:
            HumanA(std::string humanName, Weapon &humanWeapon);
            ~HumanA(void);
            void attack();
};

#endif
