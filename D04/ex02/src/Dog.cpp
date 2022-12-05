/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:45:05 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 17:36:30 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Default constructor [ Dog ]" << std::endl;
    this->type = "Dog";
    this->tab = new Brain;
}

Dog::Dog(const Dog &src): Animal(src)
{
    *this = src;
    std::cout << "Copy constructor [ Dog ]" << std::endl;
}

Dog & Dog::operator=(const Dog &src)
{
    this->type = src.type;
    if (this->tab)
        delete this->tab;
    this->tab = new Brain(*src.getBrain());
    std::cout << "Overload operator= [ Dog ]" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete tab;
    std::cout << "Default Destructor [ Dog ] "<< std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Wouff" << std::endl;
}

Brain *Dog::getBrain() const
{
    return this->tab;
}