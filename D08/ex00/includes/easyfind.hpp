/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:42:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/16 15:03:52 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

class NoFindException : public std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("No value found");           
        }
};

template <typename T>
typename T::iterator easyfind(T &base, int nbr)
{
    typename T::iterator index = std::find(base.begin(), base.end(), nbr);
    if (index == base.end())
        throw NoFindException();
    return index;
}
#endif