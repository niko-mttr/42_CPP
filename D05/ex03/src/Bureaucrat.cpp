/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:08:31 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 17:51:30 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    this->name = "Didou";
    this->grade = 3;
    std::cout << "New Bureaucrat..." << *this << std::endl;
}

Bureaucrat::Bureaucrat(std::string nameGive, int gradeGive)
{
    this->grade = gradeGive;
    try
    {
        if (this->grade < 1)
            throw Bureaucrat::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        this->grade = 1;
        std::cerr << e.what() << '\n';
    }
    try
    {
        if (this->grade > 150)
        {
            std::cout << "je passe bien dans mon exception" << std::endl;
            throw Bureaucrat::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        this->grade = 150;
        std::cerr << e.what() << '\n';
    }
    if (!nameGive.length())
    {
        std::cout << "Wrong name... standard name given : Philou" << std::endl;
        this->name = "Philou";
    }
    else
        this->name = nameGive;
    std::cout << "New Bureaucrat..." << *this << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src): name(src.getName())
{
    *this = src;
    std::cout << "New Bureaucrat..." << *this << std::endl;
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
            throw Bureaucrat::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        this->grade--;
        std::cerr << e.what() << '\n';
    }
}

void Bureaucrat::signForm(AForm &form)
{
    if (form.getIsSigned() == true)
        std::cout << *this << " signed " << form << std::endl;
    else
        std::cout << *this << " couldn't signed " << form << std::endl;
}

void Bureaucrat::executeForm(const AForm &form)
{
    if (form.execute(*this) == true)
        std::cout << *this << " executed " << form << std::endl;
    else
        std::cout << *this << "can't execute " << form << std::endl;
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &src)
{
    o << src.getName() << ", Bureaucrat grade " << src.getGrade();
    return o;
}