/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:46:31 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:19:58 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal()
{
    this->type = "Cat";
    std::cout << "Default constructor (Cat) -> type : " << type << std::endl;
}

Cat::Cat(const Cat &src): Animal(src)
{
    this->type = src.type;
    std::cout << "Copy constructor (Cat) -> type : " << type << std::endl;
}

Cat & Cat::operator=(const Cat &src)
{
    this->type = src.type;
    std::cout << "Overload operator= (Cat) -> type : " << type << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Default Destructor (Cat) -> type : " << type << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}