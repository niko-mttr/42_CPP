/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 14:19:59 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/02 16:36:30 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap : Default constructor for " << this->getName() << std::endl;
    this->setHit(100);
    this->setEnergy(50);
    this->setDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ClapTrap : Copy constructor called for " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap : Default constructor for " << name << std::endl;
    this->setHit(100);
    this->setEnergy(50);
    this->setDamage(20);
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
    ClapTrap::operator=(src);
    return *this;
} 

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap : Destructor called for " << this->getName() << std::endl;
}