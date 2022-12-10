/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 10:33:25 by nicolasmatt       #+#    #+#             */
/*   Updated: 2022/12/10 10:55:38 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate()
{
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
}

void identify(Base& p)
{
    // affiche le véritable type de l'objet pointé
}

int main()
{
    
}