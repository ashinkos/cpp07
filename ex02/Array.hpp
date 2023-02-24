/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:16:36 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 03:56:23 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<typename T>
class Array
{
private:
    T* _type;
    unsigned int _size;
public:
    Array(){
        _type = new T[0];
        _size = 0;
    };
    Array(unsigned int n){
        _type = new T[n];
        _size = n; 
    };
    ~Array(){
        
    };
    Array& operator[](unsigned index)
};


#endif