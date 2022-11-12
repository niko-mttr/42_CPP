/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:31:25 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/12 11:54:36 by nicolasmatt      ###   ########.fr       */
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
	int		index;

	cout << "Please enter the number of the contact you wan to see :" << endl;
	while (1)
	{
		cin >> index;
		if (std::cin.fail())
		{
        	std::cin.clear();
        	std::cin.ignore();
    	}
		else
			if (index <= nb_contact && index <= 8 && index)
				break ;
		cout << "Wrong number : Please try again" << endl;
	}
	contact_[index - 1].printcontact();
}

void	PhoneBook::search(int nb_contact)
{
	int i;

	i = 0;
	//protection s'il n' y a aucun contact
	if (nb_contact > 8)
		nb_contact = 8;
	while (i < nb_contact)
	{
		contact_[i].printall(i + 1);
		i++;
	}
	ft_index(nb_contact);
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