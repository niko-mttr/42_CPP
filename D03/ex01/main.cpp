/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/03 18:12:27 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void scavtrapDeath()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST SCAVTRAP DEATH ***" << std::endl;
    ScavTrap scavtrap("test 3");
    scavtrap.attack("second target");
    scavtrap.takeDamage(101);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
}

void scavtrapTest()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST SCAVTRAP ***" << std::endl;
    ScavTrap scavtrap("test 2");
    std::cout << scavtrap << std::endl;
    scavtrap.attack("first target");
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(10);
    scavtrap.guardGate();
}

void constructorTest()
{
    std::cout << std::endl << std::endl;
    std::cout << "*** TEST CONSTRUTOR ***" << std::endl;
    ScavTrap scavtrap("Test");

    (void)scavtrap;
}

int main()
{
    constructorTest();
    scavtrapTest();
    scavtrapDeath();
}