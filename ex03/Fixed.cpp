/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:05:14 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/01 19:44:16 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) //Fixed a
{
	//std::cout<<"Default constructor called"<<std::endl;
	this->fixedValue = 0;
}

Fixed::Fixed(const int value)
{
	//std::cout<<"Int constructor called"<<std::endl;
	this->fixedValue = value << fracBits;
}

Fixed::Fixed(const float value)
{
	//std::cout<<"Float constructor called"<<std::endl;
	this->fixedValue = roundf(value * (1 << fracBits));
}

Fixed::Fixed(const Fixed &other) // Fixed b(a);
{
	//std::cout<<"Copy constructor called"<<std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed &other) // c = b
{
	//std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &other)
		this->fixedValue = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	//std::cout<<"Destructor called"<<std::endl;
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

bool Fixed::operator>(const Fixed &other) const
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed &other) const{
	Fixed res;
	res.setRawBits(this->getRawBits() + other.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &other) const{
	Fixed res;
	res.setRawBits(this->getRawBits() - other.getRawBits());
	return res;
}

Fixed& Fixed::operator++() //kendi değerini değiştirilmiş şekilde döndürür. const olamaz
{
	this->fixedValue++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed original(*this);
	//original.fixedValue = this->fixedValue;
	//bu işlemi, copy assignment operatorun yaptığı şeyi manuel olarak tekrar yapmışım. o zaman neden assignment operatorum var yani? hiçbir işe yaramayacaksa
	this->fixedValue++;
	return original;
}

Fixed& Fixed::operator--()
{
	this->fixedValue--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed original(*this); //copy constructor kullan. &other olarak parametre alır o yüzden *this gönder
	this->fixedValue--;
	return original;
}

Fixed Fixed::operator*(const Fixed &other) const
{
	Fixed res;

	long long multi = (long long) (this->getRawBits() * other.getRawBits());
	res.setRawBits(multi >> fracBits);
	return res;
}

Fixed Fixed::operator/(const Fixed &other) const
{
	Fixed res;

	long long multi = (long long) (this->getRawBits() / other.getRawBits());
	res.setRawBits(multi << fracBits);
	return res;
}

Fixed& Fixed::min(Fixed &first, Fixed &second)
{
	if (first < second)
		return first;
	else
		return second;
}

const Fixed& Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first < second)
		return first;
	else
		return second;
}

Fixed& Fixed::max(Fixed &first, Fixed &second)
{
	if (first > second)
		return first;
	else
		return second;
}

const Fixed& Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first > second)
		return first;
	else
		return second;
}