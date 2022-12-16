/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:32:56 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/16 18:32:37 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ******************************************************************************* */
/*                                   COPLIEN                                       */
/* ******************************************************************************* */

Span::Span(): _N(0)
{
    this->_vector.assign(0,0);
}

Span::Span(int N): _N(N)
{
   std::cout << "Constructor called for Span with N : " << _N << std::endl; 
}

Span::Span(const Span &src): _N(src._N)
{
    std::cout << "Copy Constructor called for Span with N : " << _N << std::endl;
    this->_vector.assign(src._vector.begin(), src._vector.end());
    // *this = src;
}

Span & Span::operator=(const Span &src)
{
    if (this == &src)
        return *this;
    this->_N = src._N;
    return *this;
}

Span::~Span()
{
   std::cout << "Destructor called for Span" << std::endl; 
   //vector.clear()
}

/* ******************************************************************************* */
/*                                   DISPLAY                                       */
/* ******************************************************************************* */

void Span::printVector() const
{
    for (unsigned int i = 0; i < this->_vector.size(); i++)
        std::cout << this->_vector[i] << " ";
    std::cout << std::endl;
}

int Span::getNumber(int i) const
{
    return this->_vector[i - 1];    
}

int Span::getN() const
{
    return this->_N;
}

int Span::operator[](int i) const
{
    return this->_vector[i];
}

/* ******************************************************************************* */
/*                                   MEMBER                                        */
/* ******************************************************************************* */

void Span::addNumber(int nbr)
{
    try
    {
        if (this->_vector.size() == this->_N)
            throw FullException();
        this->_vector.push_back(nbr);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
}