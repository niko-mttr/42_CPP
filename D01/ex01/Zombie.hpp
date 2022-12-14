/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 19:14:52 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/18 15:00:17 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce( void );
		void setName( std::string name );
};

Zombie*	newZombie( std::string name );
Zombie* zombieHorde( int N, std::string name );
void 	randomChump( std::string name );

#endif