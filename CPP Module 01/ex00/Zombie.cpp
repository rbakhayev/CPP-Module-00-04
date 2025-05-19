/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:06:15 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:06:16 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    this->_name = "name";
}

Zombie::~Zombie(void)
{
    std::cout << "Zombie " <<this->_name<< " destroyed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout <<this->_name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}
