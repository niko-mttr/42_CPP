/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:16:28 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/14 13:44:19 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
    private:
        int _n;
        T* _tab;
        
    public:
        Array(): _n(0), _tab(0){std::cout << "Default constructor called" << std::endl;}
        Array(int n): _n(n), _tab(new T[n]())
        { 
            std::cout << "Constructor called" << std::endl;
            // for (int i = 0; i < _n; i++)
            //     _tab[i] = 0;
        }
        Array(const Array &src)
        {
            std::cout << "Copy constructor called" << std::endl;
            *this = src;
        }
        ~Array()
        {
            std::cout << "Destructor called" << std::endl;
            if (this->_n > 0)
                delete[] this->_tab;
        }
        Array & operator=(const Array &src)
        {
            if (this == &src)
                return *this;
            if (this->_tab)
                delete[] this->_tab;
            this->_n = src._n;
            this->_tab = new T[src._n]();
            for (int i = 0; i < src._n; i++)
                this->_tab[i] = src._tab[i];
            return *this;
        }
        
        int size(){return (this->_n);}
        
        T &operator[](int n)
        {
            try
            {
                checkSize(n);
            }
            catch(const WrongRangeException& e)
            {
                std::cout << e.what() << std::endl;
                return (this->_tab[0]);
            }
            return (this->_tab[n]);
        }

        const T &operator[](int n) const
        {
            try
            {
                checkSize(n);
            }
            catch(const WrongRangeException& e)
            {
                std::cout << e.what() << std::endl;
                return (this->_tab[0]);
            }
            return (this->_tab[n]);
        }
        
        void checkSize(int &size) const
        {
            if (size >= this->_n || size < 0)
                throw WrongRangeException();
        }
        
        class WrongRangeException : public std::exception
        {
            public:
                virtual const char * what()const throw()
                {
                    return "Wrong range give";
                }
        };
};

#endif