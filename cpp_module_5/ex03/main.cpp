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
        Bureaucrat fabio("fabio", 70);
        Bureaucrat tom("tom", 150);

        std::cout << tom << std::endl;

    	std::cout << paul << std::endl;
		paul.decrGrade();
		std::cout << paul << std::endl;

        ShrubberyCreationForm shrub("home");
        RobotomyRequestForm robot("robot");
        PresidentialPardonForm president("president");


        std::cout << shrub << std::endl;

        shrub.beSigned(paul);
        paul.executeForm(shrub);
        robot.beSigned(paul);
        paul.executeForm(robot);
        president.beSigned(paul);
        paul.executeForm(president);

        Intern intern;
        AForm *form;
        
        form = intern.makeForm("presidential pardon", "prez");

        std::cout << *form << std::endl;

        delete form;

        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy reques", "Bender");

        std::cout << *rrf << std::endl;

        rrf->beSigned(paul);
        paul.executeForm(*rrf);

        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}