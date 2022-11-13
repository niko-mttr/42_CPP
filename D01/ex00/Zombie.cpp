/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:15:13 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/13 15:40:29 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using namespace std;

Zombie::Zombie()
{
	
}

Zombie::Zombie(string name)
{
	_name = name;
}

Zombie::~Zombie()
{
	
}

void	Zombie::announce()
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}