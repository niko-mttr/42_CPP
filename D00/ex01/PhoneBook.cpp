/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:31:25 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/08 18:15:06 by nmattera         ###   ########.fr       */
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

void	PhoneBook::add(int nb_add)
{
	int i;

	i = nb_add - 1;
	contact[i].fill();
	contact[i].print();
}