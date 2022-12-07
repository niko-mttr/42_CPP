/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:28:56 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 17:38:13 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
    std::cout << "New Form..." << std::endl;
    this->name = "Circulaire du Perrigord";
    this->isSigned = 0;
    this->gradeToSign = 20;
    this->gradeToExecute = 10;
}

Form::Form(std::string nameGive, int gradeToSignGive, int gradeToExecuteGive)
{
    std::cout << "New Form..." << std::endl;
    
    /* VERIFICATION DE GRADE TO SIGN*/
    this->gradeToSign = gradeToSignGive;
    try
    {
        if (this->gradeToSign < 1)
            throw Form::GradeTooHighException();
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
            throw Form::GradeTooLowException();
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
            throw Form::GradeTooHighException();
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
            throw Form::GradeTooLowException();
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

Form::Form(const Form &src): name(src.getName())
{
    std::cout << "New Form..." << std::endl;
    *this = src;
}

Form & Form::operator=(const Form &src)
{
    this->gradeToSign = src.gradeToSign;
    this->gradeToExecute = src.gradeToExecute;
    std::cout << "Cpy Form..." << std::endl;
    return *this;
}

Form::~Form()
{
    std::cout << "Delete Form..." << std::endl;
}

std::string Form::getName()const
{
    return this->name;
}

int Form::getGradeToSign()const
{
    return this->gradeToSign;
}

int Form::getGradeToExecute()const
{
    return this->gradeToExecute;
}

bool Form::getIsSigned()const
{
    return this->isSigned;
}

void Form::beSigned(Bureaucrat &src)
{
    isSigned = true;
    try
    {
        if (this->gradeToSign < src.getGrade())
        {
            throw Form::GradeTooLowException();
        }
    }
    catch(const std::exception& e)
    {
        isSigned = false;
        std::cerr << e.what() << '\n';
    }
    src.signForm(*this);
}



std::ostream & operator<<(std::ostream &o, const Form &src)
{
    o << src.getName() << " -> grade to sign : " << src.getGradeToSign() << " | grade to execute : " << src.getGradeToExecute();
    return o;
}