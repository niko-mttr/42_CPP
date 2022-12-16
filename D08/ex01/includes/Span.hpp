/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:42:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/16 18:42:13 by nmattera         ###   ########.fr       */
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
        unsigned int _N;
        std::vector<int> _vector;
        Span();
        
    public:
        Span(int N);
        Span(const Span &src);
        Span & operator=(const Span &src);
        ~Span();

        void addNumber(int nbr);
        //utiliser la plage d'iterateurs pour eviter de repeter les appeks a addNumber
        int shortestSpan();
        int longestSapn();

        void printVector() const;
        int operator[](int i) const;
        int getN() const;
        int getNumber(int i) const;
        

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