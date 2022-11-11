/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:31:25 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/11 18:41:20 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

using namespace std;

PhoneBook::PhoneBook()
{
	
}

PhoneBook::~PhoneBook()
{
	
}

void	PhoneBook::search(int nb_contact)
{
	int i;
	int choice;

	i = 0;
	if (nb_contact > 8)
		nb_contact = 8;
	while (i < nb_contact)
	{
		contact[i].printall(i + 1);
		i++;
	}
	cout << "Please enter the number of the contact you wan to see :" << endl;
	cin >> choice;
	while (choice > nb_contact || choice > 8)
	{
		cout << "Wrong number : Please try again" << endl;
		cin >> choice;
	}
	contact[choice - 1].printcontact();
}

void	PhoneBook::ft_swap()
{
	Contact tmp;
	int i;
	
	i = 0;
	while (i < 7)
	{
		contact[i] = tmp;
		contact[i] = contact[i + 1];
		contact[i + 1] = tmp;
		i++;
	}
}

void	PhoneBook::add(int nb_add)
{
	int i;

	i = nb_add - 1;
	if (nb_add > 8)
	{
		ft_swap();
		i = 7;
	}
	contact[i].fill();
}