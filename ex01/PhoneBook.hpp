/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:11:14 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/13 21:52:47 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define N_CONT	8
# define PAD	10

# include <iostream>
# include <iomanip>
# include <string>
# include <limits>

class Contact
{
	private:
		std::string	_fname;
		std::string	_lname;
		std::string	_nname;
		std::string	_pnum;
		std::string	_secret;

	public:
		Contact(void);
		~Contact(void);
		void		print(int idx);
		void		print_detail(void);
		void		set_values(std::string sa[5]);
		std::string	get_fname(void);
		std::string	get_lname(void);
		std::string	get_nname(void);
		std::string	get_pnum(void);
		std::string	get_secret(void);
};

class PhoneBook
{
	private:
		Contact			_contacts[N_CONT];
		unsigned int	_cidx;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void);
		Contact	*get_contact(int idx);
};

# endif