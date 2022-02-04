/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:49:36 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/04 11:38:03 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _index(0), _max_index(0), _list()
{
}

Span::~Span(void)
{
}

Span::Span(const Span &obj) : _index(0), _max_index(0), _list()
{
	*this = obj;
}

Span::Span(unsigned int N) : _index(0), _max_index(N), _list()
{
	(void)N; /* ===== DELETE ===== */
}

Span	&Span::operator=(const Span &rhs)
{
	_list = rhs._list;
	return *this;
}

void	Span::addNumber(int nbr)
{
	if (_index >= _max_index)
		throw Span::Overflow();
	_list.push_back(nbr);
	_index++;
}

int	Span::shortestSpan(void) const
{
	if (_list.size() <= 1)
		throw Span::TooSmall();

	std::list<int>				copy(_list);
	int							max_span = INT_MAX;

	copy.sort();
	std::list<int>::iterator	it1 = copy.begin();
	std::list<int>::iterator	it2 = copy.begin();
	std::list<int>::iterator	end = copy.end();
	++it2;
	while (it2 != end)
	{
		if (*it2 - *it1 < max_span)
			max_span = *it2 - *it1;
		++it1;
		++it2;
	}
	return max_span;
}

int	Span::longestSpan(void) const
{
	if (_list.size() <= 1)
		throw Span::TooSmall();

	std::list<int>	copy(_list);

	copy.sort();
	return (copy.back() - copy.front());
}

void	Span::fill(std::list<int>::const_iterator begin, std::list<int>::const_iterator end)
{
	for (std::list<int>::const_iterator it = begin; it != end; ++it)
		this->addNumber(*it);
}
