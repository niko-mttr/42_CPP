/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:57:23 by nmattera          #+#    #+#             */
/*   Updated: 2022/11/22 15:57:27 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class Harl
{
	private :
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

	public :
		Harl(void);
		~Harl(void);

		void	complain( std::string level );
};

#endif