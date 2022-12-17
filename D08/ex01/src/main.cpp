/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/17 11:22:13 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void addnumber()
{
    std::cout << std::endl << "*** TEST SEVERAL ADD NUMBER ***" << std::endl;
    std::cout << "1) full " << std::endl;
    Span test(3);
    test.addNumber(1);
    std::vector<int> base (5, 10);
    test.addNumber(base.begin(), base.end());

    std::cout << "test : ";
    test.printVector();
    
    std::cout << std::endl << "2) 10 000 " << std::endl;
    Span test2(10000);
    std::vector<int> base2(10000, 9);
    test2.addNumber(base2.begin(), base2.end());
    std::cout << "test2 size : " << test2.getN() << std::endl;
}

void distance()
{
    std::cout << std::endl << "*** TEST DISTANCE ***" << std::endl;
    Span test(6);
    test.addNumber(-12);
    test.addNumber(88);
    test.addNumber(4);
    test.addNumber(0);
    test.addNumber(66);
    test.addNumber(-1);
    std::cout << "test : ";
    test.printVector();
    
    std::cout << std::endl << "1) longest  : " << test.longestSpan() << std::endl;
    
    std::cout << std::endl << "2) shortest  : " << test.shortestSpan() << std::endl;
    
}

void sujet()
{
    std::cout << std::endl << "*** TEST SUJET ***" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}

int main()
{
    distance();
    addnumber();
    sujet();
}

