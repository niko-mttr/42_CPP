/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:45:46 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 17:34:09 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
        Brain *tab;
    public:
        Cat();
        Cat(const Cat &src);
        Cat & operator=(const Cat &src);
        ~Cat();

        void makeSound()const;
        Brain *getBrain()const;
};

#endif