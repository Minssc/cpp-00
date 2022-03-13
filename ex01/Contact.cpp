/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 20:52:38 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/13 22:34:47 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

static std::string	_nice_string(const std::string &str)
{
	std::string	ret;

	ret = str.substr(0, PAD);
	if (str.length() > PAD)
		ret.at(PAD - 1) = '.';
	return (ret);
}

void	Contact::print(int idx)
{
	std::cout 
	<< std::setfill(' ') << std::setw(PAD) << std::right
	<< idx + 1 << "|"
	<< std::setfill(' ') << std::setw(PAD) << std::right
	<< _nice_string(_fname) << "|"
	<< std::setfill(' ') << std::setw(PAD) << std::right
	<< _nice_string(_lname) << "|"
	<< std::setfill(' ') << std::setw(PAD) << std::right
	<< _nice_string(_nname) 
	<< std::endl;
}

void	Contact::print_detail(void)
{
	std::cout << "First name: " << _fname << std::endl;
	std::cout << "Last name: " << _lname << std::endl;
	std::cout << "Nickname: " << _nname << std::endl;
	std::cout << "Phone number: " << _pnum << std::endl;
	std::cout << "Darkest secret: " << _secret << std::endl;
}

std::string	Contact::get_fname(void)
{
	return (_fname);
}

std::string	Contact::get_lname(void)
{
	return (_lname);
}

std::string	Contact::get_nname(void)
{
	return (_nname);
}

std::string Contact::get_pnum(void)
{
	return (_pnum);
}

std::string	Contact::get_secret(void)
{
	return (_secret);
}

void	Contact::set_values(std::string sa[5])
{
	_fname = sa[0];
	_lname = sa[1];
	_nname = sa[2];
	_pnum = sa[3];
	_secret = sa[4];
}
