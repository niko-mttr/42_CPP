/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:08:31 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/06 12:04:51 by nicolasmatt      ###   ########.fr       */
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
    if (gradeGive > 150)
        throw Bureaucrat::GradeTooLowException();
    if (gradeGive < 1)
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

Bureaucrat::Bureaucrat(const Bureaucrat &src): name(src.getName())
{
    std::cout << "New Bureaucrat..." << std::endl;
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &src)
{
    this->grade = src.grade;
    std::cout << "Cpy Bureaucrat..." << std::endl;
    return *this;
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
    this->grade--;
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        this->grade++;
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::lowGrade()
{
    this->grade++;
    try
    {
        if (grade > 150)
        {
            std::cout << "je passe bien dans mon exception" << std::endl;
            Bureaucrat::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        this->grade--;
        std::cerr << e.what() << '\n';
    }
    
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &src)
{
    o << src.getName() << ", Bureaucrat grade " << src.getGrade();
    return o;
}