/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:43:57 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 17:35:16 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    private:
        Brain *tab;
    public:
        Dog();
        Dog(const Dog &src);
        Dog & operator=(const Dog &src);
        ~Dog();
        
        void makeSound()const;
        Brain *getBrain()const;
};

#endif