/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmattera <nmattera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:32:19 by nmattera          #+#    #+#             */
/*   Updated: 2022/12/14 13:46:31 by nmattera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

/* **************************************************************************** */

// #include <time.h>
// #include <stdlib.h>

// #define MAX_VAL 12

// int main()
// {
//     // Array<int> test(3);
//     // test[1] = 6;
//     // std::cout << test[2] << std::endl;

//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

/* **************************************************************************** */

// class value
// {
//     public:
//         int cause;
//     // value & operator=(const)
// };


// void testComplex()
// {
//     Array<value> test(3);
// }

/* **************************************************************************** */

int main()
{

    std::cout << "*** TEST DES CONSTRUCTEURS ***" << std::endl;
    Array<int> test(4);
    Array<int> src(test);
    std::cout << std::endl << "*** TEST DES OPERATEURS [] ***" << std::endl;
    std::cout <<"test : " << test[2] << std::endl;
    std::cout << std::endl << "*** TEST DE LA COPIE PROFONDE ***" << std::endl;
    test[2] = 1;
    std::cout <<"test : " << test[2] << std::endl;
    std::cout <<"src : " << src[2] << std::endl;
    std::cout << std::endl << "*** TEST DE LA SIZE() ***" << std::endl;
    std::cout << test.size() << std::endl;
    test[12];
    std::cout << std::endl << "*** TEST DES DESTRUCTEURS ***" << std::endl;
}


