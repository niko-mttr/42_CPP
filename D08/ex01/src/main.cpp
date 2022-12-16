/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/16 18:42:12 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span test(3);
    test.addNumber(4);
    test.addNumber(3);
    
    std::cout << "size : " << test.getN() << " | number : " << test.getNumber(2) << " | operateur : " << test[1] << std::endl;
}

