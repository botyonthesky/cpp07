/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:28:18 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 10:44:54 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename Type>
void    iter(Type array[], int length, void funct(Type& element))
{
    int i;
    i = 0;
    while (i < length)
    {
        funct(array[i]);
        i++;
    }
}



#endif