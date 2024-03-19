#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat paul("paul", 4);

        Intern intern;
        AForm *form;
        
        form = intern.makeForm("shrubbery creation", "shrub");

        std::cout << *form << std::endl;

        form->beSigned(paul);
        paul.executeForm(*form);

        delete form;

        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");

        std::cout << *rrf << std::endl;

        rrf->beSigned(paul);
        paul.executeForm(*rrf);

        delete rrf;

        someRandomIntern.makeForm("robotomy reques", "Bender");
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}