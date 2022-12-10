/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:08:33 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/10 10:31:41 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <iostream>

struct Data
{
    int value;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data *base = new Data();
    Data *ptr;
    uintptr_t collect;

    base->value = 9;
    std::cout << "data : " << base->value << std::endl;
    std::cout << "data : " << base << std::endl;
    std::cout << std::endl << "*** SERIALIZE ***" <<std::endl;
    collect = serialize(base);
    std::cout << collect << std::endl;
    
    std::cout << std::endl << "*** DESERIALIZE ***" <<std::endl;
    ptr = deserialize(collect);
    std::cout << "ptr : " << ptr->value << std::endl;
    std::cout << "ptr : " << ptr << std::endl;
    
    delete base;
    return 0;
}