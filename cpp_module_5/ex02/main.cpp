#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

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

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}