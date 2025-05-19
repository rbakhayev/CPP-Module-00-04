/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:50:29 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 13:50:30 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
            int _value;
            static const int _fractionalBits = 8;

    public:
            Fixed();
            Fixed(const int value);
            Fixed(const float value);
            Fixed(const Fixed &other);
            ~Fixed();
            Fixed &operator=(const Fixed &other);

    float toFloat() const;
    int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
