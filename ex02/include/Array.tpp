/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmaillar <tmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 11:24:54 by tmaillar          #+#    #+#             */
/*   Updated: 2024/07/08 11:08:20 by tmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

template <typename T>
Array<T>::Array() : _size(0)
{
    _array = new T[0]();
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
    try
    {
        _array = new T[n]();   
    }
    catch (std::bad_alloc &e)
    {
        std::cerr << "Memory allocation failed" << e.what() << std::endl;
        _array = NULL;
    }   
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
Array<T> &Array<T>::operator=(const Array &src)
{
    if (this != &src)
    {
        if (_array)
            delete[] _array;
        try
        {
            _array = new T[src._size];
        }
        catch (std::bad_alloc &e)
        {
            std::cerr << "Memory alloction failed : " << e.what() << std::endl;
            _array = NULL;
        }
        _size = src._size;
        for (unsigned int i = 0; i < _size; i++)
            _array[i] = src._array[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int n)
{
    if (n >= _size || !_array)
    {
        throw std::out_of_range("Array index is out of bounds");
    }
    return (_array[n]);
}   

template <typename T>
const T &Array<T>::operator[](unsigned int n) const
{
    if (n >= _size || !_array)
    {
        throw std::out_of_range("Array index is out of bounds");
    }
    return (_array[n]);
}   


template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}


template <typename T>
unsigned int Array<T>::size() const
{
    return (_size);
}