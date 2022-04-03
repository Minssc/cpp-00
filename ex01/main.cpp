/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:10:48 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 21:49:09 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main(void)
{
	PhoneBook	pb;
	std::string inp;

	inp.clear();
	do
	{
		if (inp.compare("ADD") == 0)
			pb.add();
		else if (inp.compare("SEARCH") == 0)
			pb.search();
		else if (inp.compare("EXIT") == 0)
			break ;
		inp.clear();
		std::cout << "Input action: ";
	} while (std::getline(std::cin, inp));
	if (inp.compare("EXIT") == 0)
		std::cout << "Good Bye!" << std::endl;
	else
		std::cout << std::endl;
}