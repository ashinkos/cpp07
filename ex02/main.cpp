/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:03:58 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 20:56:05 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// int main(){

    
//     Array<int> a(5);
//     a[1]  = 10;
//     Array<int> b(a);
//     std::cout << "a[1] = " << a[1] << std::endl;
//     std::cout << a.size() << std::endl;
//     std::cout << "b[1] = " << b[1] << std::endl;

//     a[1]  = 10000;
//     std::cout << "a[1] = " << a[1] << std::endl;
//     std::cout << "b[1] = " << b[1] << std::endl;

    
//     try{
//         std::cout << a[10] << std::endl;
        
//     }
//     catch(std::exception& exp){
//         std::cout << exp.what() << std::endl;
//     }

//     try{
//         std::cout << a[-2] << std::endl;
        
//     }
//     catch(std::exception& exp){
//         std::cout << exp.what() << std::endl;
//     }
    
// }

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}