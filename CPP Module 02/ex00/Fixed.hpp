/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:49:28 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 13:49:29 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
            int _value;
            static const int _fractionalBits = 8;

    public:
            Fixed();
            Fixed(const Fixed &other);
            ~Fixed();
            Fixed &operator=(const Fixed &other);

    int getRawBits() const;
    void setRawBits(const int raw);
};

#endif
