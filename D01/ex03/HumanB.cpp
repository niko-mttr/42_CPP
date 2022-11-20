/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:58:08 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/20 16:38:10 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : _name("ben")
{
	_arme = NULL;
}

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack(void)
{
	if (_arme)
		std::cout << this->_name << " attacks with their " << (*this->_arme).getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack... " << std::endl;
}


void	HumanB::setWeapon(Weapon &weapon)
{
	this->_arme = &weapon;
}