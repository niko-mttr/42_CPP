/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 10:47:29 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void testDestructor()
{
    std::cout << std::endl << std::endl << "*** TEST DESTRUCTOR ***" << std::endl;
    WrongAnimal *test = new WrongCat();
    // WrongCat lol;
    delete test;
}

void testFake()
{   
    std::cout << std::endl << std::endl << "*** TEST SANS VIRTUAL ***" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
    std::cout << std::endl;
    std::cout << meta->getType() << " : ";
    meta->makeSound(); 
    std::cout << j->getType() << " : ";
    j->makeSound(); 
    std::cout << i->getType() << " : ";
    i->makeSound();
    
    std::cout << std::endl << "[Destructeurs]" << std::endl;
    delete meta;
    delete j;
    delete i;
}

void testReal()
{
    std::cout << "*** TEST AVEC VIRTUAL ***" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << std::endl;
    std::cout << meta->getType() << " : ";
    meta->makeSound(); 
    std::cout << j->getType() << " : ";
    j->makeSound(); 
    std::cout << i->getType() << " : ";
    i->makeSound();

    std::cout << std::endl << "[Destructeurs]" << std::endl;
    delete meta;
    delete j;
    delete i;
}

int main()
{
    testReal();
    testFake();
    testDestructor();
}