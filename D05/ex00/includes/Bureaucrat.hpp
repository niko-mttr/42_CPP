/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:54:47 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 18:28:17 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
    private:
        std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string nameGive, int gradeGive);
        Bureaucrat(const Bureaucrat &src);
        Bureaucrat & operator=(const Bureaucrat &src);
        ~Bureaucrat();

        std::string getName()const;
        int getGrade()const;

        void upGrade();
        void lowGrade();
    
};

#endif