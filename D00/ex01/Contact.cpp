/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:41 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/12 15:19:24 by nmattera         ###   ########.fr       */
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

string ft_fill_info(string message)
{
    string s;
    while (getline(cin, s))
    {
        if (!s.empty())
            break;
		else
			cout << "you must enter at least one caracter" << endl << message;
    }
	return (s);
}
void	Contact::fill()
{
	cout << "Fill the following contact informations : " << endl;
	cin.ignore();
	cout << "first name : " ;
	first_name_ = ft_fill_info("first name : ");
	cout << "last name : ";
	last_name_ = ft_fill_info("last name : ");
	cout << "nick name : ";
	nick_name_ = ft_fill_info("nick name : ");
	cout << "phone number : ";
	number_ = ft_fill_info("phone number : ");
	cout << "darkest secret : ";
	secret_ = ft_fill_info("darkest secret: ");
}

void	ft_printer(string s)
{
	int length;

	length = s.length();
	if (length > 10)
		cout << s.substr(0, 9) << ". | "; 
	else if (length < 10)
		cout << setw(10) << s << " | ";
	else
		cout << s << " | ";
}

void	Contact::printall(int index)
{
	cout << index << " | ";
	ft_printer(first_name_);
	ft_printer(last_name_);
	ft_printer(nick_name_);
	cout << endl;
}

void Contact::printcontact()
{
	cout << first_name_ << endl;
	cout << last_name_ << endl;
	cout << nick_name_ << endl;
	cout << number_ << endl;
	cout << secret_ << endl;
}