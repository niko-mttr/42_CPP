/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/06 18:57:00 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void test2()
{
    std::cout << std::endl  << "******************************" << std::endl;
    std::cout << "*** TEST FORMULAIRE DENIED ***" << std::endl;

    Form formulaire("Perrigord", 20, 10);
    Bureaucrat bureaucrat("Philippe", 33);
    std::cout << std::endl;
    std::cout << formulaire << std::endl;
    std::cout << bureaucrat << std::endl;
    std::cout << std::endl<< "TEST DE SIGNATURE" << std::endl;
    formulaire.beSigned(bureaucrat);
}

void test()
{
    std::cout << std::endl  << "**************************" << std::endl;
    std::cout << "*** TEST FORMULAIRE OK ***" << std::endl;

    Form formulaire("Perrigord", 20, 10);
    Bureaucrat bureaucrat("Philippe", 12);
    std::cout << std::endl;
    std::cout << formulaire << std::endl;
    std::cout << bureaucrat << std::endl;
    std::cout << std::endl<< "TEST DE SIGNATURE" << std::endl;
    formulaire.beSigned(bureaucrat);
}

int main()
{
    test();
    test2();
}