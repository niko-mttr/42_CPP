/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:28:56 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 10:08:23 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
{
    std::cout << "New Form..." << std::endl;
    this->name = "Circulaire du Perrigord";
    this->isSigned = 0;
    this->gradeToSign = 20;
    this->gradeToExecute = 10;
}

AForm::AForm(std::string nameGive, int gradeToSignGive, int gradeToExecuteGive)
{
    std::cout << "New Form..." << std::endl;
    
    /* VERIFICATION DE GRADE TO SIGN*/
    this->gradeToSign = gradeToSignGive;
    try
    {
        if (this->gradeToSign < 1)
            throw AForm::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        this->gradeToSign = 1;
        std::cerr << e.what() << '\n';
    }
    try
    {
        if (this->gradeToSign > 150)
        {
            throw AForm::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        this->gradeToSign = 150;
        std::cerr << e.what() << '\n';
    }

    /* VERIFICATION DE GRADE TO EXECUTE*/
    this->gradeToExecute = gradeToExecuteGive;
    try
    {
        if (this->gradeToExecute < 1)
            throw AForm::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        this->gradeToExecute = 1;
        std::cerr << e.what() << '\n';
    }
    try
    {
        if (this->gradeToExecute > 150)
        {
            throw AForm::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        this->gradeToExecute = 150;
        std::cerr << e.what() << '\n';
    }
    
    if (!nameGive.length())
    {
        std::cout << "Wrong name... standard name given : Decret anonyme" << std::endl;
        this->name = "Decret anonyme";
    }
    else
        this->name = nameGive;
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
            throw AForm::GradeTooHighException();
        }
    }
    catch(const std::exception& e)
    {
        isSigned = 0;
        std::cerr << e.what() << '\n';
    }
    src.signForm(*this);
}



std::ostream & operator<<(std::ostream &o, const AForm &src)
{
    o << src.getName() << " -> grade to sign : " << src.getGradeToSign() << " | grade to execute : " << src.getGradeToExecute();
    return o;
}