/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 18:08:01 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

// void testAbstract()
// {

//     AForm formulaire("Perrigord", 20, 10);
//     std::cout << formulaire << std::endl;
// }

void testPresident()
{
    std::cout << std::endl  << "**********************" << std::endl;
    std::cout << "*** TEST PRESIDENT ***" << std::endl;
    std::cout << "**  1) full succes  **" << std::endl;
    Bureaucrat bureaucrat("President", 3);
    PresidentialPardonForm form("Direction");
    std::cout << std::endl;
    form.beSigned(bureaucrat);
    form.execute(bureaucrat);
    
    std::cout << std::endl << "**  2) grade to law to execute  **" << std::endl;
    Bureaucrat bureaucrat2("President n*2", 6);
    PresidentialPardonForm form2("Direction");
    std::cout << std::endl;
    form2.beSigned(bureaucrat2);
    form2.execute(bureaucrat2);

    std::cout << std::endl << "**  3) form not sign to execute  **" << std::endl;
    Bureaucrat bureaucrat3("President n*3", 4);
    PresidentialPardonForm form3("Direction");
    std::cout << std::endl;
    form3.execute(bureaucrat3);
    std::cout << std::endl;
}

void testRobotomy()
{
    std::cout << std::endl  << "*********************" << std::endl;
    std::cout << "*** TEST ROBOTOMY ***" << std::endl;
    std::cout << "**  1) full succes  **" << std::endl;
    Bureaucrat bureaucrat("Philou", 42);
    RobotomyRequestForm form("Atelier");
    std::cout << std::endl;
    form.beSigned(bureaucrat);
    bureaucrat.executeForm(form);
    std::cout << std::endl;
    
    std::cout << std::endl << "**  2) grade to law to execute  **" << std::endl;
    Bureaucrat bureaucrat2("Didou n*2", 80);
    RobotomyRequestForm form2("Garage");
    std::cout << std::endl;
    bureaucrat2.signForm(form2);
    bureaucrat2.executeForm(form2);

    std::cout << std::endl << "**  3) form not sign to execute  **" << std::endl;
    Bureaucrat bureaucrat3("Tonio n*3", 22);
    RobotomyRequestForm form3("Compta");
    std::cout << std::endl;
    bureaucrat3.executeForm(form3);
    std::cout << std::endl;
}

void testShrubbery()
{
    std::cout << std::endl  << "*********************" << std::endl;
    std::cout << "*** TEST SHRUBBERY ***" << std::endl;
    std::cout << "**  1) full succes  **" << std::endl;
    Bureaucrat bureaucrat("Philou", 42);
    ShrubberyCreationForm form("Atelier");
    std::cout << std::endl;
    form.beSigned(bureaucrat);
    form.execute(bureaucrat);
    
    std::cout << std::endl << "**  2) grade to law to execute  **" << std::endl;
    Bureaucrat bureaucrat2("Didou n*2", 140);
    ShrubberyCreationForm form2("Garage");
    std::cout << std::endl;
    form2.beSigned(bureaucrat2);
    form2.execute(bureaucrat2);

    std::cout << std::endl << "**  3) form not sign to execute  **" << std::endl;
    Bureaucrat bureaucrat3("Tonio n*3", 22);
    ShrubberyCreationForm form3("Compta");
    std::cout << std::endl;
    form3.execute(bureaucrat3);
    std::cout << std::endl;
}

int main()
{
    testPresident();
    testRobotomy();
    testShrubbery();
}