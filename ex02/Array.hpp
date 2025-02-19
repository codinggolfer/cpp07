#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int _size;
public:
    Array() : array(new T[0]), _size(0) {};

    Array(unsigned int n) : array(new T[n]), _size(n) {};

    Array(Array const &copy) : array(new T[copy.size()]) {
        for (size_t i = 0; i < copy.size(); i++)
            array[i] = copy[i];
        this->_size = copy.size();
    };

    Array& operator=(Array const &other) {
        if (this != &other) {
            this->_size = other.size();
            delete[] array;
            array = new T[other.size()];
            for (size_t i = 0; i < other.size(); i++)
                array[i] = other[i];
        }
        return *this;
    }

    //subscript operators:
    T& operator[](unsigned int i) {
        if (i >= _size)
            throw std::out_of_range("Index out of range");
        return array[i];
    };
    
    const T& operator[](unsigned int i) const {
        if (i >= _size)
            throw std::out_of_range("Index out of range");
        return array[i];
    };

    unsigned int size() const { return _size; };

    ~Array() { delete[] array; };

};

