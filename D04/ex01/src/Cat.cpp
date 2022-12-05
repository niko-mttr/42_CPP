/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:46:31 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 17:34:11 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    std::cout << "Default constructor [ cat ]" << std::endl;
    this->type = "Cat";
    this->tab = new Brain;
}

Cat::Cat(const Cat &src): Animal(src)
{
    *this = src;
    std::cout << "Copy constructor [ cat ]" << std::endl;
}

Cat & Cat::operator=(const Cat &src)
{
    this->type = src.type;
    if (this->tab)
        delete this->tab;
    this->tab = new Brain(*src.getBrain());
    std::cout << "Overload operator= [ cat ]" << std::endl;
    return *this;
}

Cat::~Cat()
{
    delete tab;
    std::cout << "Default Destructor [ cat ]" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

Brain *Cat::getBrain() const
{
    return this->tab;
}