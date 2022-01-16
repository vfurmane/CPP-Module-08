/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:06:06 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/16 14:38:24 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <cstddef>

template<typename T>
typename T::const_iterator	easyfind(const T &container, int to_find)
{
	typename T::const_iterator it;
	typename T::const_iterator end = container.end();
	
	for (it = container.begin(); it != end; ++it)
	{
		if (*it == to_find)
			return it;
	}
	return --it;
}

#endif
