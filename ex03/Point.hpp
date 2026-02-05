/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:54:58 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/05 10:37:00 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	public:
		Point(void);
		Point(const float num1, const float num2);
		Point(const Point &other);
		Point &operator=(const Point &original);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
};

std::ostream& operator<<(std::ostream& os, const Point& point);

bool	bsp(Point const a, Point const b, Point const c, Point const point);


#endif