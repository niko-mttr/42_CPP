/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:53:03 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/29 16:57:54 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//comparaison

bool    Fixed::operator==(Fixed const &src) const
{
    if (this->_raw == src._raw)
        return true;
    return false;
}

bool    Fixed::operator!=(Fixed const &src) const
{
    if (this->_raw != src._raw)
        return true;
    return false;
}

bool    Fixed::operator>=(Fixed const &src) const
{
    if (this->_raw >= src._raw)
        return true;
    return false;
}

bool    Fixed::operator<=(Fixed const &src) const
{
    if (this->_raw <= src._raw)
        return true;
    return false;
}

bool    Fixed::operator>(Fixed const &src) const
{
    if (this->_raw > src._raw)
        return true;
    return false;
}

bool    Fixed::operator<(Fixed const &src) const
{
    if (this->_raw < src._raw)
        return true;
    return false;
}

//arithmetic

Fixed   Fixed::operator+(Fixed const &src)
{
    return(this->toFloat() + src.toFloat());
}

Fixed   Fixed::operator-(Fixed const &src)
{
    return(this->toFloat() - src.toFloat());
}

Fixed   Fixed::operator*(Fixed const &src)
{
    return(this->toFloat() * src.toFloat());
}

Fixed   Fixed::operator/(Fixed const &src)
{
    return(this->toFloat() / src.toFloat());
}


//incrementation

Fixed &Fixed::operator++()
{
    this->_raw++;
    return *this;
}

Fixed &Fixed::operator--()
{
    this->_raw--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed ref(*this);
    this->_raw++;
    return ref;
}

Fixed Fixed::operator--(int)
{
    Fixed ref(*this);
    this->_raw--;
    return ref;
}

//functions
Fixed &Fixed::min(Fixed & a, Fixed & b)
{
    if (a <= b)
        return a;
    return b;
}

const Fixed &Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a <= b)
        return a;
    return b;
}

Fixed &Fixed::max(Fixed & a, Fixed & b)
{
    if (a >= b)
        return a;
    return b;
}

const Fixed &Fixed::max(Fixed const & a, Fixed const & b)
{
    if (a >= b)
        return a;
    return b;
}