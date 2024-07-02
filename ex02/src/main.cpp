/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:39:36 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 11:50:06 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include "../include/Array.tpp"

#include <iostream>
#include <string>


int main()
{
    Array<int> a(5);
    Array<int> b(a);
    Array<int> c;

    c = b;

    std::cout << "a size: " << a.getSize() << std::endl;
    std::cout << "b size: " << b.getSize() << std::endl;
    std::cout << "c size: " << c.getSize() << std::endl;
    
    return 0;
}