/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 11:32:38 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/17 16:12:59 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <deque>
#include <algorithm>

template<typename T, typename Container=std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    private:
        
    public:
        MutantStack(){};
        MutantStack(const MutantStack &src): std::stack<T, Container>(src){};
        MutantStack & operator=(const MutantStack &src)
        {
            std::stack<T, Container>::operator=(src);
            return *this;
        }
        ~MutantStack(){};
        
    typedef typename Container::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
        
    typedef typename Container::reverse_iterator reverse_iterator;
    reverse_iterator rbegin()
    {
        return this->c.rbegin();
    }

    reverse_iterator rend()
    {
        return this->c.rend();
    }
};

#endif