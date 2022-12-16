/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 15:32:56 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/17 00:00:37 by nicolasmatt      ###   ########.fr       */
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

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{   
    try
    {
        while (first != last)
        {
            if (this->_vector.size() == this->_N)
                throw FullException();
            this->_vector.push_back(*first);
            first++;
        }
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

int Span::shortestSpan()
{
    if (this->_vector.size() < 2 || this->_N < 2)
        throw Span::EmptyException();
    int span = INT_MAX;
    
    std::vector<int>::iterator it1 = this->_vector.begin();
    std::vector<int>::iterator it2 = it1 + 1;
    
    while (it1 != this->_vector.end())
    {
        it2 = it1 + 1;
        while (it2 != this->_vector.end())
        {
            if (abs(*it1 - *it2) < span)
                span = abs(*it1 - *it2);
            it2++;
        }
        it1++;
    }
    return span;
}

int Span::longestSpan()
{
    if (this->_vector.size() < 2 || this->_N < 2)
        throw Span::EmptyException();
    return(*std::max_element(this->_vector.begin(), this->_vector.end()) - *std::min_element(this->_vector.begin(), this->_vector.end()));
}
