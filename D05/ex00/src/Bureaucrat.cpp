/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:08:31 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 18:28:56 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "New Bureaucrat..." << std::endl;
    this->name = "Didou";
    this->grade = 3;
}

Bureaucrat::Bureaucrat(std::string nameGive, int gradeGive)
{
    std::cout << "New Bureaucrat..." << std::endl;
    if (gradeGive > 150 || gradeGive < 1)
    {
        std::cout << "Wrong grade... standard grade given : 50" << std::endl;
        this->grade = 50;
    }
    else
        this->grade = gradeGive;
    if (!nameGive.length())
    {
        std::cout << "Wrong name... standard name given : Philou" << std::endl;
        this->name = "Philou";
    }
    else
        this->name = nameGive;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "New Bureaucrat..." << std::endl;
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src)
{
    this->name = src.name;
    this->grade = src.grade;
    std::cout << "Cpy Bureaucrat..." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Delete Bureaucrat..." << std::endl;
}

std::string Bureaucrat::getName()const
{
    return this->name;
}

int Bureaucrat::getGrade()const
{
    return this->grade;
}

void Bureaucrat::upGrade()
{
    
}

void Bureaucrat::lowGrade()
{
    
}