/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:14:18 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/22 17:47:00 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombie;
	Zombie* horde;
	int N = 3;
	
	randomChump("Mathias");
	zombie = newZombie("Arnault");
	zombie->announce();
	delete zombie;
	std::cout << "Horde is comming ... " << std::endl;
	horde = zombieHorde(N, "David");
	if (!horde)
		return 1;
	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete []horde;
}