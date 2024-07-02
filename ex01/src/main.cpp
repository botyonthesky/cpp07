/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:49:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 10:55:38 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

int main() 
{
    std::cout << "[ Test with int array ]" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};

    for (size_t i = 0; i < 5; ++i) 
        intArray[i] += 1; 

    for (int i = 0; i < 5; ++i) 
    {
        if (intArray[i] != (i + 2)) 
        { 
            std::cerr << "Test Case 1 Failed at index " << i << std::endl;
            return 1;
        }
        else
            std::cout << "Test Case 1 Passed, intArray : " << intArray[i] << std::endl;
    }
    std::cout << std::endl;
    std::cout << "[ Test with string array ]" << std::endl;
    std::string strArray[] = {"hello", "world"};

    for (size_t i = 0; i < 2; ++i) 
        strArray[i] += '?';
        
    if (strArray[0] != "hello?" || strArray[1] != "world?") 
    {
        std::cerr << "Test Case 2 Failed" << std::endl;
        return 1;
    }
    else
        std::cout << "Test Case 2 Passed" << std::endl;
    std::cout << std::endl;
    std::cout << "All tests passed." << std::endl;
    return 0;
}