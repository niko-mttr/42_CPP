/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:17:25 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/05 17:27:21 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor [ Brain ]" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "idea";
}

Brain::Brain(const Brain &src)
{
    std::cout << "Copy constructor [ Brain ]" << std::endl;
    *this = src;
}

Brain & Brain::operator=(const Brain &src)
{
    std::cout << "Operator constructor [ Brain ]" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = src.ideas[i];
    return *this;
}

Brain::~Brain()
{
    std::cout << "Default Destructor [ Brain ]" << std::endl;
}
