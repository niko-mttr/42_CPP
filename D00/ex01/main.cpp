/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:56:57 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/11 17:20:17 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

using namespace std; 

int main()
{
	string buff;
	PhoneBook book;
	int	nb_add;
	
	nb_add = 0;
	while(1)
	{
			cout << "Please enter a command :" << endl;
			cin >> buff;
			if (buff == "EXIT")
				break ;
			else if (buff == "ADD")
				book.add(++nb_add);
			else if (buff == "SEARCH")
				book.search(nb_add);
	}
}