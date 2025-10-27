/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:45:52 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/27 11:21:12 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<class T>
void iter(T *array, size_t length, void (*func)(T&))
{
    for(size_t i = 0; i < length; i++)
    {
        func(array[i]);  //aplico la funcion a cada elemento del array.
    }
}

template<class T>
void iter(T *array, size_t len, void (*func)(T const &))
{
    for(size_t i = 0; i < len; i++)
        func(array[i]);
}



//funciones de prueba

template <class T>
void increment(T &value)
{
    value++;
}


template <class T>
void print(T const &value)
{
    std::cout << value << " " ;
}

#endif