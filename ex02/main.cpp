/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarquez <smarquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:44:03 by smarquez          #+#    #+#             */
/*   Updated: 2025/10/27 13:55:48 by smarquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        std::cout <<  "default constructor" << std::endl;
        Array<int> empty_array;
        std::cout << "trying to access element 1" << std::endl;
        std::cout << empty_array[1] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught" << e.what() << std::endl;
    }
    try
    {
        std::cout << "unsigned int constructor" << std::endl;
        Array<int> int_array(5);
        std::cout << "array with  a size of: " << int_array.size() << std::endl;
        
    }
        

}