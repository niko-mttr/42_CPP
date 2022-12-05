/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 09:40:32 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/05 09:46:39 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "Wrong Cat";
    std::cout << "Default constructor (WrongCat) -> type : " << type << std::endl;
}

WrongCat::WrongCat(const WrongCat &src): WrongAnimal(src)
{
    *this = src;
    std::cout << "Copy constructor (WrongCat) -> type : " << type << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &src)
{
    this->type = src.type;
    std::cout << "Overload operator= (WrongCat) -> type : " << type << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "Default Destructor (WrongCat) -> type : " << type << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Fake Miaou" << std::endl;   
}
