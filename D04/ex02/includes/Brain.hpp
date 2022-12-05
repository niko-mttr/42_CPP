/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:02:27 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 17:27:48 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
    public:
        std::string ideas[100];
        Brain();
        Brain(const Brain &src);
        Brain & operator=(const Brain &src);
        ~Brain();
};

#endif