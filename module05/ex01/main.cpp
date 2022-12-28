#include "Bureaucrat.hpp"
#include <iostream>

int main()
{

    try
    {
        Bureaucrat  jiyo("jiyo", 1);
        Bureaucrat  junseo("junseo", 150);


        std::cout << junseo;
        std::cout << jiyo;

        jiyo.incrementGrade();
        junseo.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
