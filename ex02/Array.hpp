#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
    T* elements;
    unsigned int _size;

public:
    Array();
    Array(unsigned int n); 
    Array(const Array& other);
    Array& operator=(const Array& other);
    ~Array();

    T& operator[](unsigned int index); // Subscript operator permet acceder a un element en particulier dans un tableau
    unsigned int size() const;
};

#include "Array.tpp"

#endif
