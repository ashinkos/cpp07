/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 00:56:51 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 01:25:12 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template<typename T, typename F>
void    iter(T array, int len, F ft){
    for (int i = 0; i < len; i++){
        ft(array[i]);
    }
}

#endif