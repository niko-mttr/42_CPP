/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:41 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/08 18:22:58 by nmattera         ###   ########.fr       */
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
	string	buff(NULL);
	
	while ()
	//tant que buff est null on boucle avec message d'erreur

	return buff;
}

void	Contact::fill()
{
	cout << "first name :" << endl;
	cin >> first_name;
	first_name = ft_fill();
	cout << "last name :" << endl;
	cin >> last_name; 
	cout << "nick name :" << endl;
	cin >> nick_name; 
	cout << "phone number :" << endl;
	cin >> number; 
	cout << "darkest secret:" << endl;
	cin >> number; 
}

void	Contact::print()
{
	cout << "mon contact" << first_name << endl;
}