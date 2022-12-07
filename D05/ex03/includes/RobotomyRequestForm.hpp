/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 10:20:50 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/07 15:55:32 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm & operator=(const RobotomyRequestForm &src);
        ~RobotomyRequestForm();

        bool execute(const Bureaucrat &executor)const;
        std::string getTarget() const;
};

#endif