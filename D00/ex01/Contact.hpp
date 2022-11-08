/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:06 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/08 14:32:07 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string number;
	std::string secret;
public:
	Contact(/* args */);
	~Contact();
};

Contact::Contact(/* args */)
{
}

Contact::~Contact()
{
}
