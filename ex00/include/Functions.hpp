/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:08:32 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 10:25:48 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_HPP
#define FUNCTION_HPP

#include <iostream>

template<typename Type>
void    swap(Type& a, Type& b)
{
    Type tmp;
    tmp = a;
    a = b;
    b = tmp;
}
template<typename Type>
const Type&    min(const Type& a, const Type& b)
{
    if (a < b)
        return (a);
    return (b);       
}
template<typename Type>
const Type&   max(const Type& a, const Type& b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif