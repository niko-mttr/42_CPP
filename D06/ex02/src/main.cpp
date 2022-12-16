/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:33:25 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/13 14:45:07 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base * generate()
{
    std::srand(time(NULL));
    int num = rand() % 3;
    
    if (num == 0)
        return(new A());
    else if (num == 1)
        return(new B());
    else
        return(new C());
}

void identify(Base *p)
{
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << "identify : A" << std::endl;
    else if (b)
        std::cout << "identify : B" << std::endl;
    else if (c)
        std::cout << "identify : C" << std::endl;
    else
        std::cout << "impossible to identify this type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        // static_cast<void>(a);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << " Not A" << std::endl;
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        // static_cast<void>(b);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " not B" << std::endl;
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        // static_cast<void>(c);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << " not C" << std::endl;
    }
    
    
}

#include <iostream>
#include <cmath>
#include <cfloat>

void test()
{
        std::cout << std::boolalpha
              << "isinf(NaN) = " << std::isinf(NAN) << '\n'
              << "isinf(Inf) = " << std::isinf(INFINITY) << '\n'
              << "isinf(0.0) = " << std::isinf(0.0) << '\n'
              << "isinf(exp(800)) = " << std::isinf(std::exp(800)) << '\n'
              << "isinf(DBL_MIN/2.0) = " << std::isinf(DBL_MIN/2.0) << '\n';
}

int main()
{
    test();
    // Base *base = generate();
    // std::cout << "*** test with pointer ***" << std::endl;
    // identify(base);
    // std::cout << std::endl << "*** test with reference ***" << std::endl;
    // identify(*base);
    // delete base;
}