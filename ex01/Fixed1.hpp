/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed1.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:21:17 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/30 23:56:47 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED1_HPP
# define FIXED1_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed1
{
	private:
		int	fixedValue;
		static const int	fracBits = 8;
		
	public:
		Fixed1(void);
		Fixed1(const float value);
		Fixed1(const int value);
		Fixed1(const Fixed1 &other);
		Fixed1 &operator=(const Fixed1 &other);
		~Fixed1();
		int	getRawBits() const;
		void setRawBits(const int raw);
		int toInt() const;
		float toFloat() const;
};

std::ostream& operator<<(std::ostream& os, const Fixed1& fixed);

#endif