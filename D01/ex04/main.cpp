/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:25:28 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/21 22:40:30 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string ft_replace(std::string save, std::string s1, std::string s2)
{
	int i = 0;
	int mark = 0;
	int counter = 0;

	while (save[i])
	{
		counter = 0;
		mark = 0;
		while (save[i] == s1[counter])
		{
			if (counter == (int)(s1.length()) -1)
			{
				mark = 1;
				break ;
			}
			i++;
			counter++;
		}
		i -= counter; 
		if (mark)
		{
			save.erase(i, ++counter);
			save.insert(i, s2);
			i += s2.length();
		}
		i++;
	}
	return (save);
}

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
			if (!save.find_first_of(s1, 0))
            	out_file << ft_replace(save, s1, s2) << std::endl;
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
