/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:33 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/29 12:36:17 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed () : _rawBits(0)
{   
    std::cout << "Default constructor called" << std::endl;   
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

const int Fixed::_bitsFractional = 8;