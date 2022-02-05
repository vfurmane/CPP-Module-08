/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:49:33 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/05 11:32:25 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <climits>
# include <exception>
# include <list>

class Span
{
	public:
		Span(void);
		~Span(void);
		Span(const Span &obj);
		Span(unsigned int N);

		Span	&operator=(const Span &rhs);

		void	addNumber(int nbr);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
		void	fill(std::list<int>::const_iterator begin, std::list<int>::const_iterator end);

		class Overflow : public std::exception
		{
			virtual const char *what(void) const throw();
		};
		class TooSmall : public std::exception
		{
			virtual const char *what(void) const throw();
		};

	private:
		const unsigned int	_N;
		std::list<int>		_list;
};

#endif
