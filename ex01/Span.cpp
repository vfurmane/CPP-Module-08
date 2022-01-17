/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:49:36 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/17 14:49:49 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0), _arr(NULL)
{
}

Span::~Span(void)
{
}

Span::Span(const Span &obj) : _N(0), _arr(NULL)
{
	*this = obj;
}

Span::Span(unsigned int N) : _N(N), _arr(new [N] int)
{
}

Span	&Span::operator=(const Span &rhs)
{
	for (unsigned int i = 0; i < rhs.N; i++)
	{
		this.
	}
	return *this;
}
