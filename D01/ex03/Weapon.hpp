/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:56:50 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/18 17:20:10 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(/* args */);
	~Weapon();
	const std::string &getType();
	void getType(std::string nouveau);
};
