/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:48 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/20 13:16:56 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &arme) : _arme(arme), _name("leo")
{
}

HumanA::HumanA(std::string name, Weapon &arme) : _arme(arme), _name(name)
{
}

HumanA::~HumanA()
{
}


void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _arme.getType() << std::endl;
}