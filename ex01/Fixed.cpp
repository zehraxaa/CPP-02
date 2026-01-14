/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:22:55 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/14 23:36:29 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <ostream>

Fixed::Fixed(void) //Fixed a
{
	std::cout<<"Default constructor called"<<std::endl;
	this->fixedValue = 0;
}

Fixed::Fixed(const int value)
{
	std::cout<<"Int constructor called"<<std::endl;
	this->fixedValue = value << fracBits;
}

Fixed::Fixed(const float value)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->fixedValue = roundf(value * (1 << fracBits));
}

Fixed::Fixed(const Fixed &other) // Fixed b(a);
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other) // c = b
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &other)
		this->fixedValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed::getRawBits() const
{
	return fixedValue;
}

void Fixed::setRawBits(const int raw)
{
	this->fixedValue = raw;
}

int Fixed::toInt() const
{
	return fixedValue >> fracBits;
}

float Fixed::toFloat() const
{
	return (float)fixedValue / (1 << fracBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
