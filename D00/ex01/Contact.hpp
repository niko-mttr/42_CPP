/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:22:06 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/12 11:17:02 by nicolasmatt      ###   ########.fr       */
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