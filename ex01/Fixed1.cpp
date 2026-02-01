/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed11.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:22:55 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/30 23:57:19 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed1.hpp"

Fixed1::Fixed1(void) //Fixed1 a
{
	std::cout<<"Default constructor called"<<std::endl;
	this->fixedValue = 0;
}

Fixed1::Fixed1(const int value)
{
	std::cout<<"Int constructor called"<<std::endl;
	this->fixedValue = value << fracBits;
}

Fixed1::Fixed1(const float value)
{
	std::cout<<"Float constructor called"<<std::endl;
	this->fixedValue = roundf(value * (1 << fracBits));
}

Fixed1::Fixed1(const Fixed1 &other) // Fixed1 b(a);
{
	std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}

Fixed1& Fixed1::operator=(const Fixed1 &other) // c = b
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &other)
		this->fixedValue = other.getRawBits();
	return *this;
}

Fixed1::~Fixed1()
{
	std::cout<<"Destructor called"<<std::endl;
}

int Fixed1::getRawBits() const
{
	return fixedValue;
}

void Fixed1::setRawBits(const int raw)
{
	this->fixedValue = raw;
}

int Fixed1::toInt() const
{
	return fixedValue >> fracBits;
}

float Fixed1::toFloat() const
{
	return (float)fixedValue / (1 << fracBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed1& Fixed1)
{
	os << Fixed1.toFloat();
	return os;
}
