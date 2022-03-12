/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:02:10 by minsunki          #+#    #+#             */
/*   Updated: 2022/03/12 20:26:17 by minsunki         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static char	toupper(char c)
{
	if ('a' <= c && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

int	main(int argc , char *argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (*(++argv))
	{
		while (**argv)
		{
			std::cout << toupper(**argv);
			(*argv)++;
		}
	}
	std::cout << std::endl;
	return (0);
}