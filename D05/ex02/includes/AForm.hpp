/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:10:59 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 10:43:52 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
    private:
        std::string name;
        bool isSigned;
        int gradeToSign;
        int gradeToExecute;
        
    public:
        AForm();
        AForm(std::string nameGive, int gradeToSignGive, int gradeToExecuteGive);
        AForm(const AForm &src);
        AForm & operator=(const AForm &src);
        virtual ~AForm();

        std::string getName()const;
        int getGradeToSign()const;
        int getGradeToExecute()const;
        bool getIsSigned()const;

        virtual void beSigned(Bureaucrat &src) = 0;
        virtual bool execute(const Bureaucrat & executor);
        
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("Grade is to high");
            }
    };

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what() const throw()
            {
                return ("Grade is to low");
            }
    };
};

std::ostream & operator<<(std::ostream &o, const AForm &src);

#endif