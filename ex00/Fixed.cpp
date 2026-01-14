/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:31:22 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/14 14:12:44 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->fixedPointNum = 0;
}

Fixed::Fixed(const Fixed &z)
{
	std::cout<<"Copy constructor called"<<std::endl;
	this->fixedPointNum = z.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &other) // c = b
{
	std::cout<<"Copy assignment operator called"<<std::endl;
	if (this != &other)
	{
		this->fixedPointNum = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return fixedPointNum;
}

void Fixed::setRawBits(int const raw)
{
	std::cout<<"getRawBits member function called"<<std::endl;
	fixedPointNum = raw;
}
