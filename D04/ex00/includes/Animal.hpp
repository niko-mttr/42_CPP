/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:42:25 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:21:09 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &src);
        Animal & operator=(const Animal &src);
        virtual ~Animal();
        
        std::string getType(void) const;
        
        virtual void makeSound()const;
};

#endif