/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:25:58 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/22 15:10:59 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>
# include <string.h>

void	ft_cpy(char *file, char *out, std::string s1, std::string s2);
std::string ft_replace(std::string save, std::string s1, std::string s2);

#endif