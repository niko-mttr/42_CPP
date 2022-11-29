/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/25 11:41:54 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Fixed {
    private :
        int _rawBits;
        static const int _bitsFractional;
    
    public :
        Fixed();
        Fixed(const Fixed & src);
        Fixed &operator=(Fixed const & src);
        ~Fixed();
    
        int getRawBits()const;
        void setRawBits(int const raw);
};