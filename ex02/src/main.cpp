/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:39:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/03 09:46:51 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cassert>
#include <ctime>
#include <cstdlib>
#include "../include/Array.hpp"
#include "../include/Array.tpp"
#define MAX_VAL 750


void testDefault() 
{
    Array<int> arr;
    std::cout << "[ DEFAULT CONSTRUCTOR TEST ]" << std::endl;
    if (arr.size() == 0)
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void testParameterized() 
{
    Array<int> arr(5);
    std::cout << "[ CONSTRUCTOR TEST ]" << std::endl;
    if (arr.size() == 5)
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void testCopy() 
{
    Array<int> original(5);
    Array<int> copy(original);
    std::cout << "[ COPY CONSTRUCTOR TEST ]" << std::endl;
    if (copy.size() == original.size()) 
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void    testCopyAssignment()
{
    Array<int> original(5);
    Array<int> copy = original;
    std::cout << "[ COPY ASSIGNMENT TEST ]" << std::endl;
    if (copy.size() == original.size())
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

int   testSubject(void)
{
    std::cout << "[ SUBJECT TEST ]" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return (0);
}

int main() 
{
    testDefault();
    testParameterized();
    testCopy();
    testCopyAssignment();
    testSubject();
    return 0;
}