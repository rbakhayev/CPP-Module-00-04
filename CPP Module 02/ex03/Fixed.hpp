/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:52:32 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 13:52:35 by rbakhaye         ###   ########.fr       */
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

            bool operator>(const Fixed &other) const;
            bool operator<(const Fixed &other) const;
            bool operator>=(const Fixed &other) const;
            bool operator<=(const Fixed &other) const;
            bool operator==(const Fixed &other) const;
            bool operator!=(const Fixed &other) const;

            Fixed operator+(const Fixed &other) const;
            Fixed operator-(const Fixed &other) const;
            Fixed operator*(const Fixed &other) const;
            Fixed operator/(const Fixed &other) const;

            Fixed &operator++(); // Pre-increment
            Fixed operator++(int); // Post-increment
            Fixed &operator--(); // Pre-decrement
            Fixed operator--(int); // Post-decrement

            static Fixed& min(Fixed &a, Fixed &b);
            static const Fixed &min(const Fixed &a, const Fixed &b);
            static Fixed& max(Fixed &a, Fixed &b);
            static const Fixed &max(const Fixed &a, const Fixed &b);
};

            std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif
