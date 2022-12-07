/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:19:01 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/07 18:03:01 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137), _target("Default")
{
    std::cout << "New " << *this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137), _target(target)
{
    std::cout << "New " << *this << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : AForm(src)
{
    this->_target = src.getTarget();
    std::cout << "New " << *this << std::endl;
}
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src)
{
    this->_target = src.getTarget();
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Delete " << *this << std::endl;
}

bool	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (AForm::execute(executor))
	{
		std::string line;
        std::string name = this->_target + "_shrubbery";
        std::ifstream in("tree.txt");
        if (in)
        {
            std::ofstream out(name.c_str());
            if (out)
            {
                while (getline(in, line))
                    out << line << std::endl;
                out.close();
            }
            else
                std::cout << "Error creating file" << std::endl;
            in.close();
        }
        else
            std::cout << "Error creating file" << std::endl;
        return (true);
	}
	return (false);
}

std::string ShrubberyCreationForm::getTarget()const
{
    return this->_target;
}

std::ostream & operator<<(std::ostream &o, const ShrubberyCreationForm &i)
{
    o << i.getName() << " -> grades (to sign : " << i.getGradeToSign() << " | to execute : " << i.getGradeToExecute() << ") -> target : " << i.getTarget() << " -> is signed : " << i.getIsSigned();
    return o;
}