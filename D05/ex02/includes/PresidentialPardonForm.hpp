/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:51:11 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/07 12:25:51 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        std::string _target;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &src);
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm & operator=(const PresidentialPardonForm &src);
        ~PresidentialPardonForm();

        bool execute(const Bureaucrat &executor)const;
        std::string getTarget() const;
};

std::ostream & operator<<(std::ostream &o, const PresidentialPardonForm &i);

#endif