/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:36 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/20 13:15:14 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	Weapon &_arme;
	std::string _name;
	
public:
	HumanA();
	HumanA(Weapon &arme);
	HumanA(std::string name, Weapon &arme);
	~HumanA();

	void	attack();
};

#endif