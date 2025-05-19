/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:06:20 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:06:21 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie 
{
    private:
            std::string _name;

    public:
            Zombie(void);
            ~Zombie(void);

            void setName(std::string name);
            void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
