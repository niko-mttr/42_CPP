/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:41:49 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:16:41 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Default constructor (Animal) -> type : " << type << std::endl;
}

Animal::Animal(const Animal &src)
{
    this->type = src.type;
    std::cout << "Copy constructor (Animal) -> type : " << type << std::endl;
}

Animal & Animal::operator=(const Animal &src)
{
    this->type = src.type;
    std::cout << "Overload operator= (Animal) -> type : " << type << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Default Destructor (Animal) -> type : " << type << std::endl;
}

std::string Animal::getType(void) const
{
    return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << "Bruh" << std::endl;
}