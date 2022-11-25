/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/25 18:55:52 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Fixed {
    private :
        int _rawBits;
        static const int _bitsFractional;
    
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
};