/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:34:48 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/03 15:58:06 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int _hit;
        int _energy;
        int _damage;
        
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap & src);
        ClapTrap & operator=(const ClapTrap & src);
        ~ClapTrap();

        void setName(const std::string name);
        void setEnergy(const int energy);
        void setHit(const int hit);
        void setDamage(const int damage);

        std::string getName()const;
        int getEnergy()const;
        int getHit()const;
        int getDamage()const;

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif