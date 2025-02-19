#pragma once

#include <iostream>

template <typename T> void ciiout(T const &x) {
    std::cout << x << std::endl;
}

template <typename T> void iter(T *array, size_t length, void (*ciiout)(T const &)) {
    for (size_t i = 0; i < length; i++) {
        ciiout(array[i]);
    }
}