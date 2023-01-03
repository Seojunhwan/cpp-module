#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
    Bureaucrat b;
    Bureaucrat  jiyo("jiyo", 1);
    Bureaucrat  junseo("junseo", 150);

    std::cout << b;
    std::cout << junseo;
    std::cout << jiyo;

    try
    {
        jiyo.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        junseo.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
