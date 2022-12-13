/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:55:51 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/13 10:45:04 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *tab, const size_t size,  void (*ft)(const T &))
{
    if (size >= 0)
    {
        for (size_t i = 0; i < size; i++)
            ft(tab[i]);
    }
}

template<typename T>
void ft_print(const T &src)
{
    std::cout << src << std::endl;
}

#endif