/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:31:10 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/11 17:52:26 by nmattera         ###   ########.fr       */
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
		void search(int nb_contact);
		void exit();
		int		testtt;
	
	private:
	
		Contact contact[8];
};

#endif