/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/03 18:46:48 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

void fragtrapDeath()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST FRAGTRAP DEATH ***" << std::endl;
    FragTrap fragtrap("test 3");
    fragtrap.attack("second target");
    fragtrap.takeDamage(101);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();
}

void fragtrapTest()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST FRAGTRAP ***" << std::endl;
    FragTrap fragtrap("test 2");
    std::cout << fragtrap << std::endl;
    fragtrap.attack("first target");
    fragtrap.takeDamage(10);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();
}

void constructorTest()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST CONSTRUTOR ***" << std::endl;
    FragTrap fragtrap("Test");

    (void)fragtrap;
}

int main()
{
    constructorTest();
    fragtrapTest();
    fragtrapDeath();
}