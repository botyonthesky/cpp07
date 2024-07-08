/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:02:18 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 09:29:02 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../include/Functions.hpp"

int main()
{
    int a = 2;
    int b = 3;
    std::cout << "[ INT SWAP TEST ]" << std::endl;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "Swap (a, b)" << std::endl;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << std::endl;
    std::cout << "[ INT MIN TEST ]" << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << std::endl;
    std::cout << "[ INT MAX TEST ]" << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::cout << std::endl;
    std::cout << "[ STRING SWAP TEST ]" << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "Swap(c, d)" << std::endl;
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << std::endl;
    std::cout << "[ STRING MIN TEST ]" << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << std::endl;
    std::cout << "[ STRING MAX TEST ]" << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return (0);
}