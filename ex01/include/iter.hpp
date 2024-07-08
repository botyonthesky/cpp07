/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:28:18 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/05 10:23:36 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void    iter(T array[], unsigned int length, void (*funct)(T &))
{
    if (length == 0 || array == NULL || funct == NULL)
        return;
    for (unsigned int i = 0; i < length; i++)
    {
        funct(array[i]);
    }
}
template<typename T>
void    iter(const T *array[], unsigned int length, void (*funct)(const T &))
{
    if (length == 0 || array == NULL || funct == NULL)
        return;
    for (unsigned int i = 0; i < length; i++)
    {
        funct(array[i]);
    }
}

#endif