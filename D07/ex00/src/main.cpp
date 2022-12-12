/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolasmattera <nicolasmattera@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/12 11:55:01 by nicolasmatt      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    float a = 2.1;
    float b = 3.1;

    std::cout << "MIN -> a : " << a << " | b : " << b << " = " << min(a, b) << std::endl;
    std::cout << "MAX -> a : " << a << " | b : " << b << " = " << max(a, b) << std::endl;
    std::cout << std:: endl << "VALUE -> a : " << a << " | b : " << b << "... " << std::endl;
    swap(a, b);
    std::cout << "SWAP  -> a : " << a << " | b : " << b << std::endl;
    
}

