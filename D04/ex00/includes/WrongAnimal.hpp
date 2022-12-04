/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:26:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:29:35 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &src);
        Animal & operator=(const Animal &src);
        virtual ~Animal();
        
        std::string getType(void) const;
        
        void makeSound()const;
};

#endif