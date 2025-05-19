/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:16:33 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:16:36 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void) {};

Harl::~Harl(void) {};

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    int i = 0;
	std::string msg_level[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	while (i < 4  && level != msg_level[i])
		i++;
	if (i < 4)
	{
		while (i < 4)
		{
			std::cout << "[ " << msg_level[i] << " ]" << std::endl;
			switch (i)
			{
				case (0):
					this->debug();
					break;
				case (1):
					this->info();
					break;
				case (2):
					this->warning();
					break;
				case (3):
					this->error();
					break;
			}
			i++;
		}
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
