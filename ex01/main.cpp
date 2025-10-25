/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 15:00:27 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/25 15:00:30 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

// Funciones de prueba
template <typename T>
void print(T const &value)
{
    std::cout << value << " ";
}

template <typename T>
void increment(T &value)
{
    value++;
}

int main()
{
    // Probar con array de int
    std::cout << "=== Array de enteros ===" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = 5;
    
    std::cout << "Original: ";
    iter(intArray, intSize, print);
    std::cout << std::endl;
    
    iter(intArray, intSize, increment);
    std::cout << "Después de incrementar: ";
    iter(intArray, intSize, print);
    std::cout << std::endl;
    
    // Probar con array de strings
    std::cout << "\n=== Array de strings ===" << std::endl;
    std::string strArray[] = {"hola", "mundo", "desde", "cpp07"};
    size_t strSize = 4;
    
    std::cout << "Strings: ";
    iter(strArray, strSize, print);
    std::cout << std::endl;
    
    // Probar con array de float
    std::cout << "\n=== Array de floats ===" << std::endl;
    float floatArray[] = {1.1f, 2.2f, 3.3f};
    size_t floatSize = 3;
    
    std::cout << "Floats: ";
    iter(floatArray, floatSize, print);
    std::cout << std::endl;
    
    return 0;
}