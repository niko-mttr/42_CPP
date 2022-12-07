/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:33:54 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 21:40:32 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "New intern ..." << std::endl;
}

Intern::Intern(const Intern & src)
{
    *this = src;
    std::cout << "New intern ..." << std::endl;
}

Intern & Intern::operator=(const Intern &src)
{
    (void)src;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern deleted ..." << std::endl;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    // (void)target;
    // (void)name;
    int i = 0;
    std::string levels[3] = {"presidential pardon", "robotomy request", "shrubbery creation"}; 
    while (i < 3 && name != levels[i])
        i++;
    AForm *back = NULL;
    switch (i)
    {
        case 0:
            back = new PresidentialPardonForm(target);
            return back;
        case 1:
            back = new RobotomyRequestForm(target);
            return back;
        case 2:
            back = new ShrubberyCreationForm(target);
            return back;
        case 3:
            std::cout << "No valid target (presidential pardon | robotomy request | shrubbery creation)" << std::endl;
            break;
    }
    return NULL;
}