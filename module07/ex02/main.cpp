#include "Array.hpp"
#include <iostream>
#include <exception>

int main(void) {
    std::cout << "----------------------int array size : 5-----------------------" << std::endl;
    {
        Array<int> a(5);

        for (unsigned int i = 0; i < 5; i++) {
            a[i] = i + 1;
        }
        
        for (unsigned int i = 0; i < a.size(); i++) {
            std::cout << a[i] << std::endl;
        }
    std::cout << "--- invalid access wrong index: 5" << std::endl;
        try { 
            std::cout  << a[5];
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "----------------------char array size : 5-----------------------" << std::endl;
    {
        Array<char> a(5);
        Array<char> b(10);

        for (unsigned int i = 0; i < 5; i++) {
            a[i] = i + 'a';
        }
        b = a;
        for (unsigned int i = 0; i < b.size(); i++) {
            std::cout << a[i] << std::endl;
            std::cout << b[i] << std::endl;
        }
        std::cout << "--- invalid access wrong index: 7" << std::endl;
        try { 
            std::cout  << a[7];
        } catch (std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "----------------------int array size : 5-----------------------" << std::endl;
    std::cout << "----------------------access const int array example-----------------------" << std::endl;
    {
        Array<int> a(5);
        
        for (unsigned int i = 0; i < 5; i++) {
            a[i] = 0;
        }
        const Array<int> b(a);
        for (unsigned int i = 0; i < 5; i++) {
            std::cout << a[i] << std::endl;
            std::cout << b[i] << std::endl;
        }
    }

    return 0;
}
