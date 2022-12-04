/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:45:05 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:16:38 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    this->type = "Dog";
    std::cout << "Default constructor (Dog) -> type : " << type << std::endl;
}

Dog::Dog(const Dog &src): Animal(src)
{
    this->type = src.type;
    std::cout << "Copy constructor (Dog) -> type : " << type << std::endl;
}

Dog & Dog::operator=(const Dog &src)
{
    this->type = src.type;
    std::cout << "Overload operator= (Dog) -> type : " << type << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Default Destructor (Dog) -> type : " << type << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Wouff" << std::endl;
}