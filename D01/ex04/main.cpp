/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:25:28 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/21 18:29:10 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

void	ft_cpy(char *file, char *out, std::string s1, std::string s2)
{
    std::ifstream in_file;
    std::ofstream out_file(out);
    std::string save;

	
    in_file.open(file);

    if(in_file.is_open() && out_file)
    {
        while(getline(in_file, save))
		{
			if (!save.find(s1, 0))
            	out_file << s2 << std::endl;
			else
            	out_file << save << std::endl;
		}
		in_file.close();
    }
    else
        std::cout << "Unable to open the file!" << std::endl;
	out_file.close();
}

int main(int ac, char **av)
{
	std::string string_out;
	if (ac != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return 1;	
	}
	
	string_out = (std::string)av[1] + ".replace";
	char *out = new char [string_out.length() + 1];
	strcpy(out, string_out.c_str());
	ft_cpy(av[1], out, av[2], av[3]);
	delete []out;
}
