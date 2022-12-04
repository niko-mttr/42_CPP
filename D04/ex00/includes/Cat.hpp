/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:45:46 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:30:12 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
    private:
    public:
        Cat();
        Cat(const Cat &src);
        Cat & operator=(const Cat &src);
        ~Cat();

        void makeSound()const;
};

#endif