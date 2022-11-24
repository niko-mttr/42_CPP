/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:25:28 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/22 15:06:26 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
	std::string string_out;
	if (ac != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return 1;	
	}
	
	string_out = (std::string)av[1] + ".replace";
	char *out = (char *)string_out.c_str(); 
	ft_cpy(av[1], out, av[2], av[3]);
}
