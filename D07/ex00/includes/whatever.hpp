/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:18:15 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/12 11:55:09 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
T min(T &v1, T &v2)
{
    return (v1 < v2 ? v1 : v2);
}

template<typename T>
T max(T &v1, T &v2)
{
    return (v1 > v2 ? v1 : v2);
}

template<typename T>
void swap(T &v1, T &v2)
{
    T tmp;

    tmp = v1;
    v1 = v2;
    v2 = tmp;
}

#endif