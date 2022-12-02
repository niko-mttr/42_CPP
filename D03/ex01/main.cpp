/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/02 13:47:22 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap debut("start");
    ClapTrap action("Action");

    debut.attack("TIM");
    debut.takeDamage(1);
    debut.beRepaired(1);

    std::cout << std::endl << "Test des fonctions :" << std::endl;
    std::cout << std::endl << "Test attack :" << std::endl;
    for (int i = 0 ; i < 12 ; i++)
        action.attack("LEO");
    std::cout << std::endl << "Test beRepaired :" << std::endl;
    action.beRepaired(1);
    std::cout << std::endl << "Test takeDamage :" << std::endl;
    for (int i = 0 ; i < 4; i++)
        action.takeDamage(5);
}