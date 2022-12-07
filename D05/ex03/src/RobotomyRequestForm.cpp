/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:41:45 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 17:51:51 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request", 72, 45), _target("Default")
{
    std::cout << "New " << *this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), _target(target)
{
    std::cout << "New " << *this << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : AForm(src)
{
    this->_target = src.getTarget();
    std::cout << "New " << *this << std::endl;
}
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &src)
{
    this->_target = src.getTarget();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Delete " << *this << std::endl;
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (AForm::execute(executor) == true)
	{
		std::srand((unsigned int)time(NULL));
		if (rand() % 2)
			std::cout << "BZZZZ BZZZZZ " << this->_target << " has been robotomized successfully !" << std::endl;
		else	
			std::cout << "The " << this->_target << " robotomization failed..." << std::endl;
		return (true);
	}
	return (false);
}

std::string RobotomyRequestForm::getTarget()const
{
    return this->_target;
}

std::ostream & operator<<(std::ostream &o, const RobotomyRequestForm &i)
{
    o << i.getName() << " -> grades (to sign : " << i.getGradeToSign() << " | to execute : " << i.getGradeToExecute() << ") -> target : " << i.getTarget() << " -> is signed : " << i.getIsSigned();
    return o;
}