/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 21:42:02 by minsunki          #+#    #+#             */
/*   Updated: 2022/04/03 21:43:03 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
#define __CONTACT_HPP__

#include <string>

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
		const std::string	&get_fname(void) const;
		const std::string	&get_lname(void) const;
		const std::string	&get_nname(void) const;
		const std::string	&get_pnum(void) const;
		const std::string	&get_secret(void) const;
};

#endif