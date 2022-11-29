/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/29 16:58:17 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed {
    private :
        int _raw;
        static const int _nbBits;
    
    public :
        Fixed();
        Fixed(const int nb);
        Fixed(const float nb);
        Fixed(const Fixed & src);
        Fixed &operator=(Fixed const & src);
        ~Fixed();
    
        int getRawBits()const;
        void setRawBits(int const raw);
        float toFloat()const;
        int toInt()const;

        bool operator==(Fixed const &src) const;
        bool operator!=(Fixed const &src) const;
        bool operator>=(Fixed const &src) const;
        bool operator<=(Fixed const &src) const;
        bool operator>(Fixed const &src) const;
        bool operator<(Fixed const &src) const;

        Fixed operator+(Fixed const &src);
        Fixed operator-(Fixed const &src);
        Fixed operator*(Fixed const &src);
        Fixed operator/(Fixed const &src);

        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int);
        Fixed operator--(int);

        static Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
        
};

std::ostream & operator<<(std::ostream &os, Fixed const & nb);

#endif