/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfurmane <vfurmane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:05:46 by vfurmane          #+#    #+#             */
/*   Updated: 2022/02/04 14:30:06 by vfurmane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int	main(void)
{
	int				foo[] = {42, 21, 1337, 0, 100};
	{
		std::list<int>	bar(foo, foo + sizeof foo / sizeof *foo);
		std::cout << *easyfind(bar, 42) << std::endl;
		std::cout << *easyfind(bar, 100) << std::endl;
		std::cout << *easyfind(bar, 44) << std::endl;
	}
	{
		std::vector<int>	bar(foo, foo + sizeof foo / sizeof *foo);
		std::cout << *easyfind(bar, 42) << std::endl;
		std::cout << *easyfind(bar, 100) << std::endl;
		std::cout << *easyfind(bar, 44) << std::endl;
	}
	return 0;
}
