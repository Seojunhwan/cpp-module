#include <iostream>
#include "Span.hpp"

int main()
{
    std::cout << "----------------random number 20000----------------" << std::endl;
    {
        srand(time(NULL));
        Span sp = Span(100000);
        for (int i = 0; i < 100000; ++i) {
            sp.addNumber(rand());
        }
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "\n\n----------------random number 5----------------" << std::endl;
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "\n\n----------------random number argument vector----------------" << std::endl;
    {
        std::vector<int> v;

        v.push_back(100);
        v.push_back(2);
        v.push_back(4);

        Span sp = Span(9);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        sp.addNumber(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    std::cout << "\n\n----------------error occurred too much elements----------------" << std::endl;
    {
        try
        {
            std::vector<int> v;

            v.push_back(100);
            v.push_back(2);
            v.push_back(4);

            Span sp = Span(7);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);

            sp.addNumber(v.begin(), v.end());
            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    std::cout << "\n\n----------------error occurred is not enough----------------" << std::endl;
    {
        try
        {      
            Span sp = Span(7);
             sp.addNumber(11);

            std::cout << sp.shortestSpan() << std::endl;
            std::cout << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
