/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/16 15:05:56 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void vector()
{
    std::cout << "*** EASY FIND : vector ***" << std::endl;
    std::cout << std::endl << "-> ok : ";
    std::vector<int> tab;

    for (int i = 1; i < 100; i++)
        tab.push_back(i);
    try
    {
        std::vector<int>::iterator index = easyfind(tab, 12);
        std::cout << *index << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "-> ko : ";
    try
    {
        std::vector<int>::iterator index = easyfind(tab, 1000);
        std::cout << *index << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void list()
{
    std::cout << std:: endl << "*** EASY FIND : list ***" << std::endl;
    std::cout << std::endl << "-> ok : ";
    std::list<int> tab;

    for (int i = 1; i < 100; i++)
        tab.push_back(i);
    try
    {
        std::list<int>::iterator index = easyfind(tab, 12);
        std::cout << *index << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "-> ko : ";
    try
    {
        std::list<int>::iterator index = easyfind(tab, 1000);
        std::cout << *index << std::endl;   
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main()
{
    vector();
    list();
}

