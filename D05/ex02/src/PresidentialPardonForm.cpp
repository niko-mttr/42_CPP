/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:39:59 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/07 12:29:37 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon", 25, 5), _target("Default")
{
    std::cout << "New " << *this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("Presidential Pardon", 25, 5), _target(target)
{
    std::cout << "New " << *this << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : AForm(src)
{
    this->_target = src.getTarget();
    std::cout << "New " << *this << std::endl;
}
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &src)
{
    this->_target = src.getTarget();
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Delete " << *this << std::endl;
}

bool	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (AForm::execute(executor))
	{
		std::cout << this->_target << " was forgiven for his sins !" << std::endl;
		return (true);
	}
	return (false);
}

std::string PresidentialPardonForm::getTarget()const
{
    return this->_target;
}

std::ostream & operator<<(std::ostream &o, const PresidentialPardonForm &i)
{
    o << i.getName() << " -> grades (to sign : " << i.getGradeToSign() << " | to execute : " << i.getGradeToExecute() << ") -> target : " << i.getTarget() << " -> is signed : " << i.getIsSigned();
    return o;
}