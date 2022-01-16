/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:05:46 by vfurmane          #+#    #+#             */
/*   Updated: 2022/01/16 14:38:16 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	int				foo[] = {42, 21, 1337, 0, 100};
	std::list<int>	bar(foo, foo + sizeof foo / sizeof *foo);
	std::cout << *easyfind(bar, 42) << std::endl;
	std::cout << *easyfind(bar, 100) << std::endl;
	/* std::find                                        */
	/* https://cplusplus.com/reference/algorithm/find/  */
	/*                                                  */
	/* Return value                                     */
	/* An iterator to the first element in the range    */
	/* that compares equal to val.                      */
	/* If no elements match, the function returns last. */
	std::cout << *easyfind(bar, 44) << std::endl;
	return 0;
}
