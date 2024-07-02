/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:24:54 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 11:49:46 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(const Array &src) : _array(new T[src._size]), _size(src._size)
{
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = src._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
    if (this != &rhs)
    {
        delete[] _array;
        _array = new T[rhs._size];
        _size = rhs._size;
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
unsigned int Array<T>::getSize()
{
    return _size;
}