/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 18:19:09 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/03 18:39:24 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
    private:
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &src);
        FragTrap& operator=(const FragTrap &src);
        ~FragTrap();

        void highFivesGuys();
};

std::ostream & operator<<(std::ostream & o, const FragTrap & src);

#endif