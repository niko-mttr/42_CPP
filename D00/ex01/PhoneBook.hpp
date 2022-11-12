/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:31:10 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/12 11:37:18 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"

class PhoneBook
{
	public:
	
		PhoneBook();
		~PhoneBook();
		void ft_swap();
		void add(int nb_add);
		void ft_index(int nb_contact);
		void search(int nb_contact);
		void exit();
		int		testtt;
	
	private:
	
		Contact contact_[8];
};

#endif