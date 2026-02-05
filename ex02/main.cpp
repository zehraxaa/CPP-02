/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 23:55:38 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/05 11:39:08 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
	Fixed a;
	Fixed const b(5.05f);

	std::cout<<"a: "<<a<<std::endl;
	std::cout<<"b: "<<b<<std::endl;
	if ( a > b)
		std::cout<<"a is greater than b"<<std::endl;
	else
		std::cout<<"b is greater than a"<<std::endl;
	std::cout<<++a<<std::endl;
	std::cout<<"result: "<<a+b<<std::endl;
	std::cout<<a++<<std::endl;
	std::cout<<a<<std::endl;
	std::cout<<a--<<std::endl;
	a.setRawBits(1);
	std::cout<<a<<std::endl;
	std::cout<<b<<std::endl;
	std::cout<<b*a<<std::endl;
	std::cout<<b/a<<std::endl;
	a.setRawBits(12);
	std::cout<<"a: "<<a<<std::endl;
}