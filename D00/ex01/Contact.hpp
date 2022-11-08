/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:06 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/08 18:15:04 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>


class Contact
{
public:
	Contact();
	~Contact();
	void print();
	void fill();
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string number;
	std::string secret;
};

#endif