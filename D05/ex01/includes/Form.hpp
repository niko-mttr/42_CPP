/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:10:59 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/06 18:53:57 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        std::string name;
        bool isSigned;
        int gradeToSign;
        int gradeToExecute;
        
    public:
        Form();
        Form(std::string nameGive, int gradeToSignGive, int gradeToExecuteGive);
        Form(const Form &src);
        Form & operator=(const Form &src);
        ~Form();

        std::string getName()const;
        int getGradeToSign()const;
        int getGradeToExecute()const;
        bool getIsSigned()const;

        virtual void beSigned(Bureaucrat &src);
        
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

std::ostream & operator<<(std::ostream &o, const Form &src);

#endif