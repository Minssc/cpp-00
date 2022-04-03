/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 00:11:14 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 21:43:10 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define N_CONT	8U
#define PAD	10

#include "Contact.hpp"
// #include <iostream>
// #include <iomanip>
// #include <limits>
// #include <cstdlib>

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