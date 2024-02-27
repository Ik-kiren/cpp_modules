#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat test("paul", 151);
    std::cout << test << std::endl;

    std::cout << test.getGrade() << std::endl;
    test.decrGrade();
    std::cout << test.getGrade() << std::endl;
}