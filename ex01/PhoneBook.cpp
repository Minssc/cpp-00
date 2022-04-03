/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:10:48 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 21:58:26 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cstdlib>

PhoneBook::PhoneBook(void):	_cidx(0) {}

PhoneBook::~PhoneBook(void) {}

static void _read_input(std::string msg, std::string &to)
{
	to.clear();
	std::cout << msg;
	do
	{
		std::getline(std::cin, to);
		if (std::cin.eof())
			std::exit(1);
		if (to.empty())
			std::cout << "field cannot be empty." << std::endl << msg;
		else
			break ;
	} while(1);
}

void	PhoneBook::add(void)
{
	std::string	inp[5];
	int			i;

	i = 0;
	_read_input("first name:", inp[i++]);
	_read_input("last name:", inp[i++]);
	_read_input("nickname:", inp[i++]);
	_read_input("phone number:", inp[i++]);
	_read_input("darkest secret:", inp[i++]);
	get_contact(_cidx++)->set_values(inp);
}

static void	_cout_malign(int wid, char fill, const std::string &str)
{
	std::cout 
	<< std::setw(wid - (wid + str.length()) / 2) << std::setfill(fill)
	<< "" 
	<< std::setw((wid + str.length()) / 2) << std::setfill(fill) << std::left
	<< str
	<< std::endl;
}

void	PhoneBook::search(void)
{
	unsigned int	i;

	i = 0;
	if (_cidx == 0)
	{
		std::cout << "The phonebook is empty. try the ADD command" << std::endl;
		return ;
	}
	_cout_malign(PAD * 4 + 3, '*', "LIST OF CONTACTS");
	std::cout << "   idx    |first name| last name| nickname " << std::endl;
	for (; i < _cidx % N_CONT; ++i)
		get_contact(i)->print(i);
	if (_cidx >= N_CONT)
		for (; i < N_CONT; ++i)
			get_contact(i)->print(i);
	_cout_malign(PAD * 4 + 3, '*', "END OF CONTACTS");
	std::cout << "input idx for detailed print. (0 to cancel)" << std::endl;
	while (true)
	{
		std::cout << "> ";
		std::cin >> i;
		if (std::cin.eof())
			std::exit(1);
		if (!std::cin.fail() && i == 0)
			break ;
		else if (std::cin.fail() || i < 1 || i > (_cidx >= N_CONT ? N_CONT : _cidx))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please input a number between "
			<< "1 to " << (_cidx >= N_CONT ? N_CONT : _cidx)
			<< " or 0 to cancel" << std::endl;
			continue ;
		}
		get_contact(i - 1)->print_detail();
		break ;
	}
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Contact	*PhoneBook::get_contact(int idx = -1)
{
	if (idx == -1)
		idx = _cidx;
	return (&(_contacts[idx % N_CONT]));
}
