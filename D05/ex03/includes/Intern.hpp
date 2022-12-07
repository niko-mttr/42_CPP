/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:21:43 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 21:30:05 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
// #include <string>
// #include <new>

class Intern
{
    private:
    public:

        Intern();
        Intern(const Intern & src);
        Intern & operator=(const Intern & src);
        ~Intern();
        
        
        AForm* makeForm(std::string nameForm, std::string target);    
};

#endif