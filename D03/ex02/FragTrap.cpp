/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:19:53 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/03 18:50:48 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap : Default constructor for " << this->getName() << std::endl;
    this->setHit(100);
    this->setEnergy(100);
    this->setDamage(30);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap : Default constructor for " << this->getName() << std::endl;
    this->setHit(100);
    this->setEnergy(100);
    this->setDamage(30);
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrap : Copy constructor called for " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &src)
{
    ClapTrap::operator=(src);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap : Destructor called for " << this->getName() << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hi mate ! Give me five !" << std::endl;
}

std::ostream & operator<<(std::ostream &o, const FragTrap &src)
{
    o << src.getName() << " : hit -> " << src.getHit() << " | energy -> " << src.getEnergy() << " | damage -> " << src.getDamage();
    return o;
}