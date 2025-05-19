/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:16:40 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:16:41 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
    private:
            void debug(void);
            void info(void);
            void warning(void);
            void error(void);
    public:
            Harl (void);
	    ~Harl (void);
            void complain(std::string level);
};

typedef	void (Harl::*t_funcptr)( void );

#endif
