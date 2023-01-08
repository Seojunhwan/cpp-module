#include "Array.hpp"
#include <iostream>
#include <exception>

#define MAX_VAL 750

int main(void) {
    {
        Array<int> numbers(MAX_VAL);
        int* mirror = new int[MAX_VAL];
        srand(time(NULL));
        for (int i = 0; i < MAX_VAL; i++)
        {
            const int value = rand();
            numbers[i] = value;
            mirror[i] = value;
        }
        //SCOPE
        {
            Array<int> tmp = numbers;
            Array<int> test(tmp);
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (mirror[i] != numbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
        try
        {
            numbers[-2] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        try
        {
            numbers[MAX_VAL] = 0;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }

        for (int i = 0; i < MAX_VAL; i++)
        {
            numbers[i] = rand();
        }
        delete [] mirror;//
    }
    std::cout << "----------------------My test cases-----------------------\n\n" << std::endl;
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
