/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:33 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/29 12:50:51 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed () : _raw(0)
{   
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    _raw =  nb << _nbBits;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float  constructor called" << std::endl;
    _raw = round(nb * (1 << _nbBits));
}


Fixed::Fixed(const Fixed & src)
{
    std::cout << "Copy constructor called"  << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_raw = src.getRawBits();
    return *this;
}

std::ostream & operator<<(std::ostream &os, Fixed const & nb)
{
    os << nb.toFloat();
    return os;
}

int Fixed::getRawBits()const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return(_raw);
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->_raw = raw;
}

float Fixed::toFloat()const
{
    return ((float)_raw / ((float)(1 << _nbBits))); 
}

int Fixed::toInt()const
{
    return (_raw >> _nbBits);
}

const int Fixed::_nbBits = 8;