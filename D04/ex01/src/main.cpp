/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 17:38:17 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

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

void testTab()
{
    int n = 4;
    std::cout << "*** CONSTRUCTOR ***" << std::endl;
    Animal *test[n];
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
            test[i] = new Dog();
        else
            test[i] = new Cat();
    }
    std::cout << std::endl << "*** SOUND ***" << std::endl;
    for (int i = 0; i < n; i++)
        test[i]->makeSound();
    std::cout << std::endl << "*** DESTRUCTOR ***" << std::endl;
    for (int i = 0; i < n; i++)
        delete test[i];
}

void testStruct()
{
    std::cout << "*** CONSTRUCTOR ***" << std::endl;
    Animal *test = new Dog();
    std::cout << std::endl << "*** DESTRUCTOR ***" << std::endl;
    delete test;
}

void testCopy()
{
    std::cout << "*** CONSTRUCTION AND COPY ***" << std::endl;
    Cat *test = new Cat();
    Cat *cpy = new Cat();
    *test = *cpy;
    std:: cout << std::endl << "*** ACCES BRAIN ***" << std::endl;
    Brain *base = test->getBrain();
    (void)base;
    std:: cout << std::endl << "*** DELETE COPY ***" << std::endl;
    delete cpy;
    std:: cout << std::endl << "*** ACCES BRAIN ***" << std::endl;
    Brain *base2 = test->getBrain();
    (void)base2;
    std::cout << std::endl << "*** DELETE AGAIN***" << std::endl;
    delete test;
}

int main()
{
    // testReal();
    // testFake();
    // testDestructor();
    // testTab();
    // testStruct();
    // testCopy();
}