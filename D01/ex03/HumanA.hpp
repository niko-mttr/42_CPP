/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:36 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/18 17:31:57 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon _arme;
	std::string _name;
	
public:
	HumanA(Weapon arme);
	HumanA(Weapon arme, std::string name);
	~HumanA();
};

