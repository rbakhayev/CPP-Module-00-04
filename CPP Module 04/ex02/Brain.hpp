/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:21:32 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:21:33 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
            std::string ideas[100];

    public:
            Brain();
            Brain(const Brain &other);
            Brain &operator=(const Brain &other);
            ~Brain();
};

#endif
