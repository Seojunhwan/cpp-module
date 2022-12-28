#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
    try
    {
        {
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("robotomy request", "Bender");
            delete rrf;
        }
        {
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
            delete rrf;
        }
        {
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
            delete rrf;
        }
        {
            Intern someRandomIntern;
            AForm* rrf;
            rrf = someRandomIntern.makeForm("rotomy request", "Bender");
            delete rrf;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
   

    return 0;    
}
