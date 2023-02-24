/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouni <aaouni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 03:16:36 by aaouni            #+#    #+#             */
/*   Updated: 2023/02/24 15:35:07 by aaouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <stdexcept>

template<typename T>
class Array
{
private:
    T* _tab;
    unsigned int _size;
public:
    Array(){
        _tab = new T[0];
        _size = 0;
    };
    
    Array(unsigned int n){
        _tab = new T[n];
        _size = n; 
    };

    Array(Array& inst){
        this->_tab = new T[inst._size];
        this->_size = inst._size;
        for(unsigned int i = 0; i < inst._size; i++){
            this->_tab[i] = inst._tab[i];
        }
    };
    
    Array& operator=(T inst){
        delete [] this->_tab;
        this->_tab = new T[inst._size];
        this->_size = inst._size;
        for(unsigned int i = 0; i < inst._size; i++){
            this->_tab[i] = inst._tab[i];
        }
        return *this;
    };
    
    ~Array(){
        delete [] this->_tab;
    };
    
    T& operator[](int index){
        if (index >= (int)_size || index < 0)
            throw std::out_of_range("index is out of bounds");
        return(this->_tab[index]);
    };

    unsigned int size() const{
        return(this->_size);
    }
};


#endif