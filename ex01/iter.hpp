/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:56:51 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 21:21:32 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T>
void    iter(T* array, int len, void (*ft)(T& var)){
    for (int i = 0; i < len; i++){
        ft(array[i]);
    }
}

template<typename T>
void    iter(const T* array, int len, void (*ft)(const T& var)){
    for (int i = 0; i < len; i++){
        ft(array[i]);
    }
}

#endif