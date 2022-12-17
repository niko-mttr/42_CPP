/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/17 16:21:36 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void sujet()
{
    std::cout << std::endl<< "*** TEST SUJET ***" <<std::endl; 
    
    MutantStack<int> test;
    test.push(5);
    test.push(17);

    std::cout << "top : " << test.top() << std::endl;
    test.pop();
    std::cout << "top : " << test.top() << std::endl;

    std::cout << "size : " << test.size() << std::endl;

    test.push(3);
    test.push(5);
    test.push(737);
    test.push(0);
    
    MutantStack<int>::iterator it = test.begin();
    std::cout << "begin : " << *it << std::endl;
    MutantStack<int>::iterator ite = test.end();

    ++it;
    --it;
    std::cout << "iteration on test : ";
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
    std::stack<int> s(test);
}

void constante()
{
    std::cout << std::endl<< "*** TEST REVERSE ***" <<std::endl; 

    MutantStack<int> test;
    test.push(5);
    test.push(17);

    std::cout << "top : " << test.top() << std::endl;
    test.pop();
    std::cout << "top : " << test.top() << std::endl;

    std::cout << "size : " << test.size() << std::endl;

    test.push(3);
    test.push(5);
    test.push(737);
    test.push(0);
    
    MutantStack<int>::reverse_iterator it = test.rbegin();
    std::cout << "rbegin : " << *it << std::endl;
    MutantStack<int>::reverse_iterator ite = test.rend();

    ++it;
    --it;
    std::cout << "iteration on test : ";
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
    std::stack<int> s(test);
}

void list()
{
    std::cout << std::endl<< "*** TEST LIST ***" <<std::endl; 

    std::list<int> test;
    test.push_back(5);
    test.push_back(17);

    std::cout << "begin : " << *test.begin() << std::endl;
    test.pop_back();
    std::cout << "top : " << *test.begin() << std::endl;

    std::cout << "size : " << test.size() << std::endl;

    test.push_back(3);
    test.push_back(5);
    test.push_back(737);
    test.push_back(0);
    
    std::list<int>::iterator it = test.begin();
    std::cout << "begin : " << *it << std::endl;
    std::list<int>::iterator ite = test.end();

    ++it;
    --it;
    std::cout << "iteration on test : ";
    while (it != ite)
    {
        std::cout << *it << " ";
        it++;
    }
    std::cout << std::endl;
}

int main()
{
    sujet();
    constante();
    list();
}

