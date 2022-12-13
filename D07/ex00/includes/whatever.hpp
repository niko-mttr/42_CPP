/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:18:15 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/13 11:13:06 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
T min(const T &v1, const T &v2)
{
    return (v1 < v2 ? v1 : v2);
}

template<typename T>
T max(const T &v1, const T &v2)
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