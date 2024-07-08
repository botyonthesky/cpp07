/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:49:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 11:22:56 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/iter.hpp"

void    printConstInt(const int &num) 
{
    std::cout << num << " ";
}

void    printInt(int &num) 
{
    std::cout << num << " ";
}

void    printString(std::string &str)
{
    std::cout << str;
}
void    increment(int &num)
{
    num++;
}

void    stringTest(void)
{
    std::cout << "[ STRING TEST ]" << std::endl;
    std::string arr[] = {"You ", "don't ", "talk ", "about ", "Fight Club."};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "for loop ->" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    std::cout << "function template iter ->" << std::endl;
    ::iter(arr, size, printString);
    std::cout << std::endl;
}

void    constIntTest(void)
{
    std::cout << "[ CONST INT TEST ]" << std::endl;
    const int tab[] = {0, 1, 2, 3, 4};
    int size = sizeof(tab) / sizeof(tab[0]);
    std::cout << "for loop ->" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "function template iter ->" << std::endl;
    ::iter(tab, 5, printConstInt);
    std::cout << std::endl;
}

void    intTest(void)
{
    std::cout << "[ INT TEST ]" << std::endl;
    int tab[] = {5, 6, 7, 8, 9};
    int size = sizeof(tab) / sizeof(tab[0]);
    std::cout << "for loop ->" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "function template iter ->" << std::endl;
    ::iter(tab, 5, printInt);
    std::cout << std::endl;
}

void    incrementTest(void)
{
    std::cout << "[ INCREMENT TEST ]" << std::endl;
    int tab[] = {0, 1, 2, 3, 4};
    int size = sizeof(tab) / sizeof(tab[0]);
    std::cout << "for loop ->" << std::endl;
    for (int i = 0; i < size; i++)
    {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "increment each element" << std::endl;
    ::iter(tab, size, increment);
    std::cout << std::endl;
    std::cout << "for loop after increment ->" << std::endl;\
    for (int i = 0; i < size; i++)
    {
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;

}

int main(void)
{
    stringTest();
    std::cout << std::endl;
    constIntTest();
    std::cout << std::endl;
    intTest();   
    std::cout << std::endl;
    incrementTest();
    return 0;
}