#include "Array.hpp"


template <typename T>
Array<T>::Array()
{
    Array = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    Array = new unsigned int[n];
}

template <typename T>
Array<T>::Array(const Array<T>& other)
{
    this->_size = other._size;

    if (this->_size > 0)
    {
        this->Array = new T[this->_size];

        for (unsigned int i = 0; i < this->_size; i++)
            this->Array[i] = other.Array[i];
    }
    else
        this->Array = NULL; 
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &other)
{
    if (this == &other)
        return *this;

    delete[] this->Array;

    this->_size = other._size;

    if (this->_size > 0)
    {
        this->Array = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++)
        {
            this->Array[i] = other.Array[i];
        }
    }
    else
    {
        this->Array = NULL;
    }

    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] Array;
}

template <typename T>
unsigned int Array<T>::size() const { return _size; }

template <typename T>
T	Array<T>::operator[](unsigned int index)
{
    if (index >= this->_size)
        throw std::out_of_range("Index out of bound limitations!");
    return this->Array[index];
}
