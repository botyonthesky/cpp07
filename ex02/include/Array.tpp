/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:24:54 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/02 13:32:25 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"
#include <sstream>
#include <cassert>

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    try
    {
        _array = new T[n];   
    }
    catch (std::bad_alloc &e)
    {
        std::cerr << "Memory allocation failed" << e.what() << std::endl;
        _array = NULL;
    }
    _size = n;    
}

template <typename T>
Array<T>::Array(const Array &src) : _size(src._size)
{
    try
    {
        _array = new T[src._size];
    }
    catch (std::bad_alloc &e)
    {
        std::cerr << "Memory alloction failed" << e.what() << std::endl;
        _array = NULL;
    }
    for (unsigned int i = 0; i < _size; i++)
        _array[i] = src._array[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
    if (this != &rhs)
    {
        delete[] _array;
        try
        {
            _array = new T[rhs._size];
        }
        catch (std::bad_alloc &e)
        {
            std::cerr << "Memory alloction failed : " << e.what() << std::endl;
            _array = NULL;
        }
        _size = rhs._size;
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = rhs._array[i];
    }
    return (*this);
}

template <typename T>
Array<T> &Array<T>::operator[](unsigned int n)
{
    if (n >= _size)
    {
        std::cerr << "Index out of range" << std::endl;
        return (_array[0]);
    }
    return (_array[n]);
}   

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}



template <typename T>
unsigned int Array<T>::size()
{
    return _size;
}