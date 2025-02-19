#include "iter.hpp"

int main() {
    std::string strings[] = {"Hello", "World", "!"};
    int ints[] = {1, 2, 3, 4, 5};
    char chars[] = {'a', 'b', 'c', 'd', 'e'};

    iter(strings, (sizeof(strings) / sizeof(strings[0])), ciiout);
    iter(ints, (sizeof(ints) / sizeof(ints[0])), ciiout);
    iter(chars, (sizeof(chars) / sizeof(chars[0])), ciiout);

}