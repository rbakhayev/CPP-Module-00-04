/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:52:56 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 13:52:57 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const float x, const float y) : _x(x), _y(y) {}

Point::Point(const Point &other) : _x(other._x), _y(other._y) {}

Point::~Point() {}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        //this->_x = other._x;
	//this->_y = other._y;
    }
    return *this;
}

const Fixed Point::getX() const
{
    return _x;
}

const Fixed Point::getY() const
{
    return _y;
}
