/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:14:18 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/18 14:54:35 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* zombie;
	
	randomChump("Mathias");
	zombie = newZombie("Arnault");
		if (!zombie)
			std::cout << "error : memory allocation" << std::endl;
		else
			zombie->announce();
	delete zombie;
}