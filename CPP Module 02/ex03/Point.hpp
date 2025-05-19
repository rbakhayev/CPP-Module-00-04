/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:53:02 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 13:53:03 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
            const Fixed _x;
            const Fixed _y;

    public:
            Point();
            Point(const float x, const float y);
            Point(const Point &other);
            ~Point();
            Point &operator=(const Point &other);

            const Fixed getX() const;
            const Fixed getY() const;
};
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
