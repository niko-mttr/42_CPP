/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:56:50 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/20 13:15:15 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string &getType();
	void setType(std::string type);
};

#endif
