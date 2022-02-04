/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:48:17 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/03 11:21:49 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iterator>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;

		typename MutantStack<T>::container_type::iterator		begin()
		{
			return this->c.begin();
		}
		typename MutantStack<T>::container_type::const_iterator	begin() const
		{
			return this->c.begin();
		}
		typename MutantStack<T>::container_type::iterator		end()
		{
			return this->c.end();
		}
		typename MutantStack<T>::container_type::const_iterator	end() const
		{
			return this->c.end();
		}
};

#endif
