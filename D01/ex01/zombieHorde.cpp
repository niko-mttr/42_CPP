/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:01:10 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/18 15:24:59 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
		return NULL;
	Zombie *nouveau = new Zombie[N];

	for (int i = 0; i < N; i++)
		nouveau[i].setName(name);
	return nouveau;
}