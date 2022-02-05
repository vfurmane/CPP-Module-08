/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:58:07 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/05 11:52:28 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <iterator>
#include "Span.hpp"

#define MAX_SPAN_SIZE 10000

int	rand_max_size(void)
{
	return (std::rand() % MAX_SPAN_SIZE);
}

int	main(void)
{
	srand(time(NULL));
	{
		std::list<int>	list(10, 0);
		std::generate(list.begin(), list.end(), rand_max_size);
		std::cout << "The list is:" << std::endl;
		std::copy(list.begin(), list.end(), std::ostream_iterator<int>(std::cout, "\n"));
		Span	sp(10);
		sp.fill(list.begin(), list.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout << "==========" << std::endl;
	{
		std::list<int>	list(MAX_SPAN_SIZE, 0);
		std::generate(list.begin(), list.end(), rand_max_size);
		Span	sp(MAX_SPAN_SIZE);
		sp.fill(list.begin(), list.end());
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	std::cout << "==========" << std::endl;
	{
		Span sp = Span(5);
		try {
			sp.shortestSpan();
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(5);
		try {
			sp.longestSpan();
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try {
			sp.addNumber(21);
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	return 0;
}
