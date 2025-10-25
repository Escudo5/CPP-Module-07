/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 13:37:35 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/25 13:51:20 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP


template <class T>
void swap(T &a, T &b)
{
    T temp =  a;
    a =  b;
    b =  temp;
}


template <class T>
T min(T a, T b)
{
    if (a < b)
        return a;
    return b;
}

template <class T>
T max(T a, T b)
{
    if (a > b)
        return a;
    return b;
}

#endif
