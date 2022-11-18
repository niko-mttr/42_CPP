/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:12:45 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/18 16:33:16 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	std::cout << "************* ADRESSES *************" << std::endl;
	std::cout << " adresse STR    -> " << &string << std::endl;
	std::cout << " adresse PTR    -> " << stringPTR << std::endl;
	std::cout << " adresse REF    -> " << &stringREF << std::endl;
	std::cout << std::endl << "************* CONTENT **************" << std::endl;
	std::cout << " STR    -> " << string << std::endl;
	std::cout << " PTR    -> " << *stringPTR << std::endl;
	std::cout << " REF    -> " << stringREF << std::endl;
}