/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:49:33 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/18 09:44:26 by vfurmane         ###   ########.fr       */
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

		class Overflow : public std::exception
		{
			virtual const char *what(void) const throw()
			{
				return "The span contains the maximum amount of numbers.";
			}
		};
		class TooSmall : public std::exception
		{
			virtual const char *what(void) const throw()
			{
				return "The span needs to contain at least 2 elements";
			}
		};

	private:
		std::list<int>	_list;
};

#endif
