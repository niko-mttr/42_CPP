/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:41 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/11 18:43:51 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

using namespace std;

Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}

string ft_fill()
{
	string	buff("");
	
	while (!buff.length())
	{
		cin >> buff;
		if (!buff.length())
			cout << "you must enter at least one caracter" << endl;
	}

	return buff;
}

void	Contact::fill()
{
	cout << "first name :" << endl;
	cin >> first_name;
	cout << "last name :" << endl;
	cin >> last_name;
	cout << "nick name :" << endl;
	cin >> nick_name;
	cout << "phone number :" << endl;
	cin >> number;
	cout << "darkest secret:" << endl;
	cin >> secret;
}

void	Contact::printall(int index)
{
	cout << index << " | ";
	cout << first_name << " | ";
	cout << last_name << " | ";
	cout << nick_name << " | " << endl;
}

void Contact::printcontact()
{
	cout << first_name << endl;
	cout << last_name << endl;
	cout << nick_name << endl;
	cout << number << endl;
	cout << secret << endl;
}