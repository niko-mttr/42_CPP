/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:27:05 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:29:57 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal";
    std::cout << "Default constructor (WrongAnimal) -> type : " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    this->type = src.type;
    std::cout << "Copy constructor (WrongAnimal) -> type : " << type << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src)
{
    this->type = src.type;
    std::cout << "Overload operator= (WrongAnimal) -> type : " << type << std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Default Destructor (WrongAnimal) -> type : " << type << std::endl;
}

std::string WrongAnimal::getType(void) const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "Bruh" << std::endl;
}