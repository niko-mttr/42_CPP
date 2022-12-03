/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:05:09 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/03 17:41:30 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("noname"), _hit(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap : Default constructor with no name called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hit(10), _energy(10), _damage(0)
{
    std::cout << "ClapTrap : Default constructor called for : " << name << std::endl;
    if (name.length() > 0)
        _name = name;
    else
        _name = "noname";
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap : Copy constructor called for " << _name << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap&src)
{
    std::cout << "ClapTrap : Operator overload called for " << _name << std::endl;
    _name = src.getName();
    _hit = src.getHit();
    _energy = src.getEnergy();
    _damage = src.getDamage();
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap : Destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (_energy <= 0|| _hit <= 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " failed..." << std::endl;
        return ; 
    }
    std::cout << "ClapTrap " << _name << " attacks " << target << " causing " <<  _damage << " points of damage !" << std::endl;
    _energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit <= 0)
    {
        std::cout << "ClapTrap can't take damage " << _name << " is already down with 0 hit point" << std::endl;
        return ;
    }
    _hit -= amount;
    if (_hit > 0)
        std::cout << "ClapTrap " << _name << " is attacked and loses " << amount << " hit points ! " <<  "Only " << _hit << " hit points left !" << std::endl;
    else
        std::cout << "ClapTrap " << _name << " is attacked and loses " << amount << " hit points ! " <<  _name << " is down with zero hit point left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy <= 0 || _hit <= 0)
    {
        std::cout << "ClapTrap " << _name << " can't repaired..." << std::endl;
        return ; 
    }
    _hit += amount;
    _energy--;
    std::cout << "ClapTrap " << _name << " repairs and gains " << amount << " hit points ! hit points left : " << _hit << std::endl;
}

void ClapTrap::setName(const std::string name)
{
    if (!name.length())
    {
        std::cout << "name can't be set empty..." << std::endl;
        return ;
    }
    _name = name;
}

void ClapTrap::setEnergy(const int energy)
{
    if (energy < 1)
    {
        std::cout << "energy can't be set under zero..." << std::endl;
        return ;
    }
    _energy = energy;
}

void ClapTrap::setHit(const int hit)
{
    if (hit < 1)
    {
        std::cout << "hit can't be set under zero..." << std::endl;
        return ;
    }
    _hit = hit;
}

void ClapTrap::setDamage(const int damage)
{
    if (damage < 1)
    {
        std::cout << "damage can't be set under zero..." << std::endl;
        return ;
    }
    _damage = damage;
}

std::string ClapTrap::getName()const
{
    return(_name);
}

int ClapTrap::getEnergy()const
{
    return(_energy);
}

int ClapTrap::getHit()const
{
    return(_hit);
}

int ClapTrap::getDamage()const
{
    return(_damage);
}
