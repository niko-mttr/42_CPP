/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 12:35:49 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

// void testAbstract()
// {
//     std::cout << std::endl  << "************************" << std::endl;
//     std::cout << "*** TEST ABSTRACT ***" << std::endl;

//     AForm formulaire("Perrigord", 20, 10);
//     std::cout << formulaire << std::endl;
// }

int main()
{
    // testAbstract();
    Bureaucrat bureaucrat("President", 6);
    PresidentialPardonForm form("Direction");
    std::cout << std::endl;
    form.beSigned(bureaucrat);
    form.execute(bureaucrat);
    std::cout << std::endl;
}