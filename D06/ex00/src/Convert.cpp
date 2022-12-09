/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:27:34 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/09 19:50:12 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _str(""), _type(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Convert::Convert(std::string str) : _str(str), type(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Convert::Convert(const Convert &src) : _str(src.getStr()), _type(src.getType())
{
    std::cout << "Copy constructor called" << std::endl;
}


Convert & Convert::operator=(const Convert &src)
{
    std::cout << "Overload operator = called" << std::endl;
    if (this != &src)
    {
        this->_str = src.getStr();
        this->_type = src.getType();
    }
    return *this;
}

Convert::~Convert()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Convert::getStr()
{
    return this->_str;
}

int Convert::getType()
{
    return this->_type;
}

/********************************************************************/
/*                             Checks                               */
/********************************************************************/

void Convert::checkInput()
{
    if (this->checkChar())
        this->_type = CHAR;
    else if (this->checkInt() || this->checkDouble() || this->checkFloat())
        this->_type = NUM;
    //throw std::execption()
}