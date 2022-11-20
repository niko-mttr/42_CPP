/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:25:28 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/20 17:47:44 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return 1;	
	}
	
}

/* ****** ****** */
/*      TEST     */
/* ****** ****** */
//normal
//sans mot a remplacer
//vide 
//sans droit d'acces
//n'existe pas
//creation d'un fichier qui existe deja