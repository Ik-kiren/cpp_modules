#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat paul("paul", 149);
        std::cout << paul << std::endl;

        std::cout << paul.getGrade() << std::endl;
        paul.decrGrade();
        std::cout << paul.getGrade() << std::endl;
        paul.decrGrade();
        std::cout << paul.getGrade() << std::endl;

        /*Bureaucrat ken("ken", 2);
        std::cout << ken << std::endl;

        std::cout << ken.getGrade() << std::endl;
        ken.incrGrade();
        std::cout << ken.getGrade() << std::endl;
        ken.incrGrade();
        std::cout << ken.getGrade() << std::endl;

        Bureaucrat paul("paul", -1);

        Bureaucrat ken("ken", 151);*/
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}