/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:27:34 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/10 00:40:35 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(): _str(""), _type(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Convert::Convert(std::string str) : _str(str), _type(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Convert::Convert(const Convert &src) : _str(src._str), _type(src._type)
{
    // std::cout << "Copy constructor called" << std::endl;
}


Convert & Convert::operator=(const Convert &src)
{
    // std::cout << "Overload operator = called" << std::endl;
    if (this != &src)
    {
        this->_str = src._str;
        this->_type = src._type;
    }
    return *this;
}

Convert::~Convert()
{
    // std::cout << "Destructor called" << std::endl;
}

std::string Convert::getString()
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
    else
        throw Convert::TypeNotFoundException();
}

bool Convert::checkChar()
{
    std::string input = this->getString();
    
    if(input.length() ==1)
    {
        if (!isprint(input.c_str()[0]) || isdigit(input.c_str()[0]))
            return false;
        return true;
    }
    return false;
}

bool Convert::checkInt()
{
    std::string input = this->getString();
    size_t i = 0;

    if (input.c_str()[i] == '-' || input.c_str()[i] == '+')
        i++;
    while(i < input.length() && isdigit(input.c_str()[i]))
        i++;
    if (i == input.length())
        return true;
    return false;
}

bool Convert::checkDouble()
{
    std::string input = this->getString();
    size_t i = 0;
    int dot = 0;

    if (this->getString() == "-inf" || this->getString() == "+inf" || this->getString() == "nan")
        return true;
    
    if (input.c_str()[i] == '-' || input.c_str()[i] == '+')
        i++;
    while (i < input.length())
	{
		if (input.c_str()[i] == '.' && input.c_str()[i + 1] != '\0')
		{
			dot++;
			i++;
		}
		else if (isdigit(input.c_str()[i]))
			i++;
		else
			return (false);
	}
	if (input.length() == i && dot == 1)
		return (true);
	return (false);
}

bool Convert::checkFloat()
{
    std::string input = this->getString();
    size_t i = 0;
    int dot = 0;
    
    if (this->getString() == "-inff" || this->getString() == "+inff" || this->getString() == "nanf")
        return true;
        
    if (input.c_str()[i] == '-' || input.c_str()[i] == '+')
        i++;
    while (i < input.length() - 1)
	{
		if (input.c_str()[i] == '.' && input.c_str()[i + 1] != '\0')
		{
			dot++;
			i++;
		}
		else if (isdigit(input.c_str()[i]))
			i++;
		else
			return (false);
	}
	if ((i == input.length() - 1) && input.c_str()[i] == 'f' && dot == 1)
		return (true);
	return (false);
}

/********************************************************************/
/*                             Convert                              */
/********************************************************************/

char Convert::convertChar()
{
    long double nbr;

    if (this->_type == CHAR)
        return static_cast<char>(this->getString().c_str()[0]);
    else
    {
        nbr = strtod(this->getString().c_str(), NULL);
        if (static_cast<long long>(nbr) > std::numeric_limits<char>::max() || static_cast<long long>(nbr) < std::numeric_limits<char>::min())
            throw ImpossibleException();
        if(std::isinf(nbr) || std::isnan(nbr))
			throw ImpossibleException();
//EXPLIQUER
//LA LIGNE EN DESSOUS
// vvvvvvvvvvvvvvvvvv
        if (!isprint(static_cast<char>(nbr)) || (isdigit(this->getString().length() == 1 && static_cast<char>(nbr))))
            throw NotDisplayableException();
    }
    return static_cast<char>(nbr);
}

int Convert::convertInt()
{
    long double nbr;

    
    if (this->getType() == CHAR)
        return static_cast<int>(this->getString().c_str()[0]);
    else
    {
        nbr = strtod(this->getString().c_str(), NULL);
        if (static_cast<long long>(nbr) > std::numeric_limits<char>::max() || static_cast<long long>(nbr) < std::numeric_limits<char>::min())
            throw ImpossibleException();
        if (std::isinf(nbr) && std::isnan(nbr))
            throw ImpossibleException();
    }
    return (static_cast<int>(nbr));
}

double Convert::convertDouble()
{
    long double nbr;
    
    if (this->getType() == CHAR)
        return static_cast<double>(this->getString().c_str()[0]);
    else
    {
        nbr = strtod(this->getString().c_str(), NULL);
        if (std::isinf(nbr) && std::isnan(nbr))
            throw ImpossibleException();
    }
    return static_cast<double>(nbr);
}

float Convert::convertFloat()
{
    long double nbr;

    
    if (this->getType() == CHAR)
        return static_cast<float>(this->getString().c_str()[0]);
    else
    {
        nbr = strtod(this->getString().c_str(), NULL);
        if (std::isinf(nbr) && std::isnan(nbr))
            throw ImpossibleException();
    }
    return static_cast<float>(nbr);
}


/********************************************************************/
/*                             Display                              */
/********************************************************************/

void Convert::display()
{
    try
    {
        checkInput();
    }
    catch (std:: exception &e)
    {
        std::cout << "char : " << e.what() << std::endl;
        return ; 
    }
    try
    {
        char tmp = convertChar();
        std::cout << "char : '" << tmp << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "char : " << e.what() << '\n';
    }
    try
    {
        int tmp = convertInt();
        std::cout << "int : " << tmp << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "int : " << e.what() << '\n';
    }
    try
    {
        float tmp = convertFloat();
        std::cout.precision(1);
        std::cout << "float : " << std::fixed << tmp << "f" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "float : " << e.what() << '\n';
    }
    try
    {
        double tmp = convertDouble();
        std::cout.precision(1);
        std::cout << "double : " << std::fixed << tmp << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "double : " << e.what() << '\n';
    }
}