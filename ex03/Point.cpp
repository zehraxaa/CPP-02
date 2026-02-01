/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:44:42 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/01 19:43:54 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {
	//std::cout<<"Default constructor called"<<std::endl;
}

Point::Point(const float num1, const float num2) : x(num1), y(num2) {
	//std::cout<<"Float parameter constructor called"<<std::endl;
}

Point::Point(const Point &other) : x(other.getX()), y(other.getY())
{
	//std::cout<<"Copy constructor called"<<std::endl;
}

//const değişkenler sonradan değiştirilemez. sadece ilk oluştukları an değer alırlarmış
Point& Point::operator=(const Point &original)
{
	//std::cout<<"Copy assignment operator called"<<std::endl;
	(void)original; //derleyici unused parameter hatası vermesin diye
	return *this;
}

Point::~Point()
{
	//std::cout<<"Destructor called"<<std::endl;
}

Fixed Point::getX() const
{
	return this->x;
}

Fixed Point::getY() const
{
	return this->y;
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
	os << "(" << point.getX() << ", " << point.getY() << ")";
	return os;
}
