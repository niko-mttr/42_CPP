/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:35:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/24 18:29:10 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class   Fixed {
    private :
    
    public :
    Fixed();
    Fixed(const Fixed & src);
    Fixed &operator=(Fixed const & src);
    ~Fixed();
    
};