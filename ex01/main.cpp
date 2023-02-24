/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:56:54 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 01:26:31 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"iter.hpp"
template<typename T>
void print(T str)
{
    std::cout << str << std::endl;
}

int main ()
{
    std::string str[3] = {"hello", "world", "nothing"};
    int tab[10] = {5,3,6,8,9,20,53,13,10,9};
    // iter(tab,10,print);
    iter(str,3,print<std::string>);
    iter(tab,10,print<int>);

}