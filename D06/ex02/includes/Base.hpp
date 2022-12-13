/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:33:55 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/10 13:08:55 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cstdlib>


class Base
{
    public :
        virtual ~Base(){}
};

class A : public Base
{
    
};

class B : public Base
{
    
};

class C : public Base
{
    
};

void test();
#endif