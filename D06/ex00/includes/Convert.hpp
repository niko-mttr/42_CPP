/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 16:18:15 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/09 19:49:51 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <string>

#define CHAR 1
#define NUM 2

class Convert{
    private :
        int _type;
        std::string _str;
    
    public:
        Convert();
        Convert(std::string str);
        Convert(const Convert &src);
        Convert& operator=(const Convert &src);
        ~Convert();

        std::string getString();
        int getType();
        

        void checkInput();
        bool chechChar();
        bool checkInt();
        bool checkDouble();
        bool checkFloat();
        
        char convertChar();
        int convertInt();
        double convertDouble();
        float convertFloat();        
        
        void display();

    class TypeNotFoundException : public std::exception
    {
        public:
            virtual const char * what() const throw()
            {
                return ("value is neither int, float, double, char");
            }
    };

    class ImpossibleException : public std::exception
    {
        public:
            virtual const char* what() const throw()
            {
                return ("impossible");
            }
    };
    
    class NotDisplayableException : public std::exception
    {
        public :
            virtual const char* what() const throw()
            {
                return ("none displayable");
            }        
    };
};

#endif