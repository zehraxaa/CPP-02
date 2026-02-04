/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:04:04 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/04 19:00:35 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed formula(const Point num1, const Point num2, const Point p)
{
	return (((num2.getX()-num1.getX()) * (p.getY()-num1.getY()))
		 - ((num2.getY()-num1.getY()) * (p.getX()-num1.getX())));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed d1, d2, d3;
	
	d1 = formula(a, b, point);
	d2 = formula(b, c, point);
	d3 = formula(c, a, point);
	
	bool neg = false;
	bool pos = false;

	if (d1 < 0 && d2 < 0 && d3 < 0)
		neg = true;
	else if (d1 > 0 && d2 > 0 && d3 > 0)
		pos = true;
	return (neg || pos);
}