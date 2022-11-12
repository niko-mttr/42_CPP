/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:31:25 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/12 14:56:37 by nmattera         ###   ########.fr       */
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

void	PhoneBook::ft_index(int nb_contact)
{
	int index;
	cout << "Enter the index of the contact : ";
	while (1)
	{
		while (!(cin >> index))
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Not a valid index. Please try again : ";
		}
		if (index > 0 && index <= nb_contact && index < 9)
			break ;
		else
			cout << "Not a valid index. Please try again : ";
	}
	contact_[index - 1].printcontact();
}

void	PhoneBook::search(int nb_contact)
{
	int i;

	i = 0;
	if (nb_contact > 0)
	{	
		if (nb_contact > 8)
			nb_contact = 8;
		while (i < nb_contact)
		{
			contact_[i].printall(i + 1);
			i++;
		}
		ft_index(nb_contact);
	}
	else
		cout << "No contact at this time." << endl;
}

void	PhoneBook::ft_swap()
{
	Contact tmp;
	int i;
	
	i = 0;
	while (i < 7)
	{
		contact_[i] = tmp;
		contact_[i] = contact_[i + 1];
		contact_[i + 1] = tmp;
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
	contact_[i].fill();
}