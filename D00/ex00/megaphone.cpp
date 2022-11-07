/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:12:04 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/07 17:20:26 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

using namespace std;

int	main(int ac, char **av)
{
	int	i;
	int	word;
	
	if (ac == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (word = 1; word < ac; word++)
		for (i = 0; i < (int)strlen(av[word]); i++)
			cout << (char)toupper(av[word][i]);
	cout << endl;
}