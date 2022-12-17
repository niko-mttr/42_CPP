/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:32:38 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/17 12:12:12 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <deque>
#include <algorithm>

template<typename T, typename Container=std::deque<T>>
class MutantStack : public std::stack<T, Container>
{
    private:
        Container c;
        
    public:
        MutantStack(){};
        MutantStack(const MutantStack &src): std::stack<T, Container>(src){};
        MutantStack & operator=(const MutantStack &src)
        {
            std::stack<T, Container>::operator=(src);
            return *this;
        }
        ~MutantStack(){};
};

#endif