/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:39:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/08 11:18:15 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cassert>
#include <ctime>
#include <cstdlib>
#include "../include/Array.hpp"
#include "../include/Array.tpp"
#define MAX_VAL 750


void    arrayTest(void)
{
    std::cout << "[ ARRAY TEST ]" << std::endl;
    std::cout << "Default constructor test ->" << std::endl;
	Array<int> a;
	std::cout << "Size of array a: " << a.size() << std::endl;
    std::cout << std::endl;
    
	std::cout << "Constructor test with parameter ->" << std::endl;
	Array<int> b(10);
	std::cout << "Size of array b: " << b.size() << std::endl;
    std::cout << std::endl;
    
	std::cout << "Copy onstructor test ->" << std::endl;
	Array<int> c(b);
	std::cout << "Size of array c: " << c.size() << std::endl;
    std::cout << std::endl;

	std::cout << "Copy assignment test with parameter ->" << std::endl;	
	a = b;
	Array<int> d(a);
	std::cout << "Size of array d: " << d.size() << std::endl;
    std::cout << std::endl;
    
	std::cout << "Constructor test with parameter (const)->" << std::endl;
	const Array<int> e(10);
	std::cout << "Size of array e: " << e.size() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Subscript operator test ->" << std::endl;         
	try
	{   
        std::cout << "Display array d with for each element the i value" << std::endl;
		for (unsigned int i = 0; i <= d.size() - 1; i++)
		{
            d[i] = i;
			std::cout << "d[" << i << "] = " << d[i] << std::endl;
		}
        std::cout << std::endl;
        std::cout << "Display const array e" << std::endl;
        for(unsigned int i = 0; i <= e.size() - 1; i++)
        {
            // e[i] = i;
			std::cout << "e[" << i << "] = " << e[i] << std::endl;
        }
        std::cout << std::endl;
        std::cout << "Display array b with for each element the i value, and cath exception" << std::endl;
        for (unsigned int i = 0; i <= b.size(); i++)
		{
            b[i] = i;
			std::cout << "b[" << i << "] = " << b[i] << std::endl;
		}
	}
	catch (std::out_of_range &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}


}

int   subjectTest(void)
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
    arrayTest();
    std::cout << std::endl;
    subjectTest();
    return 0;
}