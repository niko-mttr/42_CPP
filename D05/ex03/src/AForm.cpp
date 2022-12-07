/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:28:56 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 16:14:47 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), isSigned(0), gradeToSign(150), gradeToExecute(100)
{
    std::cout << "New Form..." << std::endl;
}

AForm::AForm(std::string nameGive, int gradeToSignGive, int gradeToExecuteGive) : name(nameGive), isSigned(false), gradeToSign(gradeToSignGive), gradeToExecute(gradeToExecuteGive)
{
    std::cout << "New Form... " << std::endl;
}

AForm::AForm(const AForm &src): name(src.getName())
{
    std::cout << "New AForm..." << std::endl;
    *this = src;
}

AForm & AForm::operator=(const AForm &src)
{
    this->gradeToSign = src.gradeToSign;
    this->gradeToExecute = src.gradeToExecute;
    std::cout << "Cpy Form..." << std::endl;
    return *this;
}

AForm::~AForm()
{
    std::cout << "Delete Form..." << std::endl;
}

std::string AForm::getName()const
{
    return this->name;
}

int AForm::getGradeToSign()const
{
    return this->gradeToSign;
}

int AForm::getGradeToExecute()const
{
    return this->gradeToExecute;
}

bool AForm::getIsSigned()const
{
    return this->isSigned;
}

void AForm::beSigned(Bureaucrat &src)
{
    isSigned = true;
    try
    {
        if (this->gradeToSign < src.getGrade())
        {
            throw AForm::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        isSigned = 0;
        std::cerr << e.what() << '\n';
    }
    src.signForm(*this);
}


bool AForm::execute(const Bureaucrat &executor) const
{
    try
    {
        if (this->gradeToExecute < executor.getGrade())
            throw AForm::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }
    try
    {
        if (this->isSigned == false)
            throw AForm::FormNotSigned();
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }
    return true;
}


std::ostream & operator<<(std::ostream &o, const AForm &src)
{
    o << src.getName() << " -> grades (to sign : " << src.getGradeToSign() << " | to execute : " << src.getGradeToExecute() << ") -> is signed : " << src.getIsSigned();
    return o;
}