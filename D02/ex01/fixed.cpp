/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:33 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/28 17:51:19 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed () : _rawBits(0)
{   
    std::cout << "Default constructor called" << std::endl;   
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called" << std::endl;
    //doit convertir  nb en Fixed -> << Fixed::_fractionalbitspart;
    _rawBits =  nb;
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float  constructor called" << std::endl;
    //comment gerer  la conversion ??
}


Fixed::Fixed(const Fixed & src)
{
    std::cout << "Copy constructor called"  << std::endl;
    *this = src;
}

Fixed & Fixed::operator=(Fixed const & src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_rawBits = src.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream & operator<<(std::ostream &os, Fixed const & nb)
{
    os << nb.toFloat();
    return os;
}

int Fixed::getRawBits()const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(_rawBits);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_rawBits = raw;
}

float Fixed::toFloat()
{
    float convert;
    
    //pas suffissant pour les converssion aue faire de la partie fractional ??
    (float)this->_rawBits = convert;
    return convert; 
}

int Fixed::toInt()const
{
    int convert;
    //comment gerer la conversion
    return convert;
}

const int Fixed::_bitsFractional = 8;