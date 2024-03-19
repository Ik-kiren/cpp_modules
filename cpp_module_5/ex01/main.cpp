#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat paul("paul", 141);
    	std::cout << paul << std::endl;
		paul.decrGrade();
		std::cout << paul << std::endl;

        Bureaucrat leo("leo", 120);

    	Form form("form", 135, 150);
    
		std::cout << form << std::endl;

		form.beSigned(leo);
        form.beSigned(paul);

        //Form error("error", 152, 150);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}