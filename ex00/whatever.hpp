/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 23:56:18 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 00:53:51 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
void    swap(T& a, T& b){
    T c;
    c = a;
    a = b;
    b = c;
}

template<typename T>
T&    min(T& a, T& b){
return ( (a < b) ? a : b);
}

template<typename T>
T&    max(T& a, T& b){
return ( (a > b) ? a : b);
}

#endif