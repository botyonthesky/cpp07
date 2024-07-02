/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:25:06 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 11:49:34 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>

template <typename T>
class Array
{
    private:
        T*           _array;
        unsigned int _size; 
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &src);
        Array &operator=(const Array &rhs);
        ~Array();

        unsigned int getSize();
};



#endif