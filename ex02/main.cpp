#include "Array.hpp"

int main() {
        int * a = new int(); 
        std::cout << "Array a: " << *a << std::endl;
        Array<int> b(5);
        Array<int> c(5);
        Array<int> d(c);
        Array<int> e(5);
        Array<int> f(5);
        try {
        for (size_t i = 0; i < b.size(); i++) {
            b[i] = i;
            c[i] = i + 1;
            d[i] = i + 2;
            e[i] = i + 3;
            f[i] = i + 4;
        }
            std::cout << "Array b: " << b[0] << std::endl;
            std::cout << "Array c: " << c[1] << std::endl;
            std::cout << "Array d: " << d[2] << std::endl;
            std::cout << "Array e: " << e[3] << std::endl;
            std::cout << "Array f: " << f[4] << std::endl;
            std::cout << "last should overflow Array d: " << d[6] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

}