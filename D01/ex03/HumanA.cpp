/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:57:48 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/18 17:44:39 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon arme)
{
	//if arme ??
	_arme = arme;
	_name = "leo";
}

HumanA::HumanA(Weapon arme, std::string name)
{
	_arme = arme;
	_name = name;
}

HumanA::~HumanA()
{
}