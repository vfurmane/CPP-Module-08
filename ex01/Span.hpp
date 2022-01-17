/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 11:49:33 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/17 16:19:54 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <cstddef>

class Span
{
	public:
		Span(void);
		~Span(void);
		Span(const Span &obj);
		Span(unsigned int N);

		Span	&operator=(const Span &rhs);

	private:
		unsigned int	_N;
		int				*_arr;
};

#endif
