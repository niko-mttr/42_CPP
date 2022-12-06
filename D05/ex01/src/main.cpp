/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/06 15:04:00 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void testInit()
{
    std::cout << std::endl  << "**************************" << std::endl;
    std::cout<< "*** TEST INITIALISATION ***" << std::endl;
    std::cout << std::endl << "UP GRADE" << std::endl;
    Bureaucrat test("David", -15);
    std::cout << test << std::endl;
    std::cout << std::endl << "DOWN GRADE" << std::endl;
    Bureaucrat test2("Sandrine", 166);
    std::cout << test2 << std::endl;
}

void testSimple()
{
    std::cout << std::endl  << "**************************" << std::endl;
    std::cout << "*** TEST MODIFICATION ***" << std::endl;
    std::cout << std::endl << "UP GRADE" << std::endl;
    Bureaucrat test("David", 1);
    test.upGrade();
    std::cout << test << std::endl;
    std::cout << std::endl << "DOWN GRADE" << std::endl;
    Bureaucrat test2("Sandrine", 150);
    std::cout << test2 << std::endl;
    test2.lowGrade();
    std::cout << test2 << std::endl;
}

int main()
{
    testSimple();
    testInit();
}