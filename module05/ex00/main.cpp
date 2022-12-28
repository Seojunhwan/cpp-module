#include "Bureaucrat.hpp"
#include <iostream>

int main()
{

    try
    {
        Bureaucrat  junseo("junseo", 151);
        Bureaucrat  jiyo("jiyo", 0);


        std::cout << junseo;
        std::cout << jiyo;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
