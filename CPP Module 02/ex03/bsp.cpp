/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 13:52:15 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 13:52:17 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float crossProduct(Point A, Point B, Point C) 
{
    return (B.getX().toFloat() - A.getX().toFloat() ) * (C.getY().toFloat()  - A.getY().toFloat() ) - (B.getY().toFloat()  - A.getY().toFloat() ) * (C.getX().toFloat()  - A.getX().toFloat());
}

bool bsp(Point const a, Point const b, Point const c, Point const point) 
{
	float crossABP = crossProduct(a, b, point);
	float crossBCP = crossProduct(b, c, point);
	float crossCAP = crossProduct(c, a, point);
	
	if (crossABP == 0 && crossBCP == 0 && crossCAP == 0) 
		return 0;
	else if ((crossABP > 0 && crossBCP > 0 && crossCAP > 0) || (crossABP < 0 && crossBCP < 0 && crossCAP < 0)) 
		return 1;
	else 
		return 0; 		
}

