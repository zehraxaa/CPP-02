/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 16:06:49 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/02/04 22:35:57 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	Point a;
	Point b(10, 0);
	Point c(0, 10);

	Point p1(1, 1);
	std::cout<<p1<<std::endl;
	
	if (bsp(a,b,c,p1))
		std::cout<<"Given point is inside of the triangle"<<std::endl;
	else
		std::cout<<"Given point is outside, vertex or on an edge"<<std::endl;;
}