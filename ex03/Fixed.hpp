/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 14:57:07 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/01 16:05:41 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
	private:
		int	fixedValue;
		static const int	fracBits = 8;
		
	public:
		Fixed(void);
		Fixed(const float value);
		Fixed(const int value);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();
		int	getRawBits() const;
		void setRawBits(const int raw);
		int toInt() const;
		float toFloat() const;

		bool operator>(const Fixed &other) const;
		bool operator<(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;
		Fixed operator+(const Fixed &other) const;
		Fixed operator-(const Fixed &other) const;
		Fixed& operator++(); //pre-increament
		Fixed operator++(int); //post-increament
		Fixed& operator--();
		Fixed operator--(int);
		Fixed operator*(const Fixed &other) const;
		Fixed operator/(const Fixed &other) const;
		static Fixed& min(Fixed &first, Fixed &second);
		static const Fixed& min(const Fixed &first, const Fixed &second);
		static Fixed& max(Fixed &first, Fixed &second);
		static const Fixed& max(const Fixed &first, const Fixed &second);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif