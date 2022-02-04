/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:58:07 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/04 11:38:39 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <time.h>
#include "Span.hpp"

#define MAX_SPAN_SIZE 10000

std::list<int>	*generateRandomList(unsigned int N)
{
	std::list<int>	*list = new std::list<int>;

	srand(time(NULL));
	for (unsigned int i = 0; i < N; i++)
		list->push_back(rand() % N);
	return list;
}

int	main(void)
{
	{
		std::list<int>	*list = generateRandomList(10);
		std::list<int>::const_iterator	begin = list->begin();
		std::list<int>::const_iterator	end = list->end();
		std::list<int>::const_iterator	it;
		for (it = begin; it != end; ++it)
			std::cout << *it << std::endl;
		std::cout << "==========" << std::endl;
		Span	sp(10);
		sp.fill(list->begin(), list->end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		delete list;
	}
	std::cout << "==========" << std::endl;
	{
		std::list<int>	*list = generateRandomList(MAX_SPAN_SIZE);
		Span	sp(MAX_SPAN_SIZE);
		sp.fill(list->begin(), list->end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		delete list;
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
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return 0;
}
