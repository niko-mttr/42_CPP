/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/04 18:29:12 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void testCat()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST CAT ***" << std::endl;
    Cat Cat;
}

void testDog()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST DOG ***" << std::endl;
    Dog Dog;
}

void testAnimal()
{
    std::cout << "*** TEST ANIMAL ***" << std::endl;
    Animal animal;
}

// int main()
// {
//     testAnimal();
//     testDog();
//     testCat();
// }

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete i;
    return 0;
}