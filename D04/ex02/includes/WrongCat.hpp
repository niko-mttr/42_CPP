/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:27:51 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 09:46:57 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:
    public:
        WrongCat();
        WrongCat(const WrongCat &src);
        WrongCat & operator=(const WrongCat &src);
        ~WrongCat();

        void makeSound()const;
};

#endif