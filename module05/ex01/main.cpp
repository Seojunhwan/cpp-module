#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

int main()
{

    {
        /**
         * valid
         **/
        try
        {
            Bureaucrat  jiyo("jiyo", 1);
            Form f("hi", 12, 12);

            jiyo.signForm(f);
            std::cout << f << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        /**
         * Invalid
         **/
        try {
            Bureaucrat  junseo("Junseo", 30);
            Form f("form2", 29, 29);

            junseo.signForm(f);
            std::cout << f << std::endl;
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }
    {
        /**
         * Invalid
         **/
        try {
            Bureaucrat  junseo("Junseo", 30);
            Form f("form2", 0, 29);

            junseo.signForm(f);
            std::cout << f << std::endl;
        } catch (const std::exception &e) {
            std::cerr << e.what() << '\n';
        }
    }
    
    return 0;    
}
