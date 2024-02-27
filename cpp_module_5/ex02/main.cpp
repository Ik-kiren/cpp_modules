#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat test("paul", 1);
    	std::cout << test << std::endl;
		test.decrGrade();
		std::cout << test << std::endl;

        ShrubberyCreationForm shrub("home");

        shrub.execute(test);

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}