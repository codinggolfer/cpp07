#pragma once

#include <iostream>

template <typename T> T min(T const &x, T const &y) {
    if (x == y)
        return y;
    return (x < y) ? x : y;
};

template <typename T> void swap(T &x, T &y) {
    T tmp = x;
    x = y;
    y = tmp;
};

template <class T> T max(T const &x, T const &y) {
    if (x == y)
        return y;
    return (x > y) ? x : y;
};