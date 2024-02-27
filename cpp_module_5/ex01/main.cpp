#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat test("paul", 149);
    	std::cout << test << std::endl;
		test.decrGrade();
		std::cout << test << std::endl;

    	Form form("form", 140, 150);
    
		std::cout << form << std::endl;

		form.beSigned(test);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}