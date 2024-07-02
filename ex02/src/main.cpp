/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:39:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 13:28:13 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../include/Array.hpp"
#include "../include/Array.tpp"

void testDefault() 
{
    Array<int> arr;
    std::cout << "Test Default Constructor: ";
    if (arr.size() == 0)
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void testParameterized() 
{
    Array<int> arr(5);
    std::cout << "Test Parameterized Constructor: ";
    if (arr.size() == 5)
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void testCopy() 
{
    Array<int> original(5);
    Array<int> copy(original);
    std::cout << "Test Copy Constructor: ";
    if (copy.size() == original.size()) 
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void    testCopyAssignment()
{
    Array<int> original(5);
    Array<int> copy = original;
    std::cout << "Test Copy Assignment: ";
    if (copy.size() == original.size())
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void testOperator() 
{
    Array<int> arr(5); 
    std::stringstream buffer;
    std::streambuf *prevCerr = std::cerr.rdbuf(buffer.rdbuf());


    arr[2] = 10; 
    assert(arr[2] == 10 && "Element at index 2 should be 10");

    arr[6] = 20; 
    std::string errMsg = buffer.str();
    assert(errMsg.find("Index out of range") != std::string::npos 
    && "Accessing out-of-range index did not produce expected error message");

    std::cerr.rdbuf(prevCerr);

    std::cout << "Test Array Access: PASSED\n";
}


int main() 
{
    // testDefault();
    // testParameterized();
    // testCopy();
    // testCopyAssignment();
    testOperator();
    return 0;
}