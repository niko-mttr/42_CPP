/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:42:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/16 16:05:17 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
    private:
        std::vector<int> _value;
        unsigned int _N;
        Span();
        
    public:
        Span(int N);
        Span(const Span &src);
        Span & operator=(const Span &src);
        ~Span();

        void addNumber(int nbr);
        int shortestSpan();
        int longestSapn();
        
        //utiliser la plage d'iterateurs pour eviter de repeter les appeks a addNumber

        class FullException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Span is already full");
                }
        };

        class EmptyException: public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("No distance can be found");
                }
        };
};

#endif