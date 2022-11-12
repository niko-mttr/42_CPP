/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:06 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/12 15:07:59 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>


class Contact
{
public:
	Contact();
	~Contact();
	void printall(int index);
	void printcontact();
	void fill();
private:
	std::string	first_name_;
	std::string	last_name_;
	std::string	nick_name_;
	std::string	number_;
	std::string	secret_;
};

#endif