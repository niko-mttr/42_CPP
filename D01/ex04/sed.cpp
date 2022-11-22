/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:06:31 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/22 15:46:57 by nmattera         ###   ########.fr       */
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
		mark = 0;
		counter = 0;
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
			save = ft_replace(save, s1, s2);
			if (in_file.eof())
            	out_file << save;
			else
            	out_file << save << std::endl;
		}
		in_file.close();
		
    }
    else
	{
        std::cout << "Unable to open the file!" << std::endl;
	}
	out_file.close();
}