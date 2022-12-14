/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:59 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/20 16:36:45 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_arme;
	std::string _name;
	
public:
	HumanB();
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif