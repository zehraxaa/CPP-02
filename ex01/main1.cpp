/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:20:51 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/31 14:50:45 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed1.hpp"

int main( void )
{
	Fixed1 a;
	Fixed1 const b( 10 );
	Fixed1 const c( 42.42f );
	Fixed1 const d( b );
	a = Fixed1( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}
