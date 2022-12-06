/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/06 12:03:30 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void testSimple()
{
    std::cout << "*** TEST SIMPLE ***" << std::endl;

    Bureaucrat test("David", 151);
    test.lowGrade();
    std::cout << test << std::endl;
}

int main()
{
    testSimple();
}