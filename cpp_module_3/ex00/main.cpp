#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");

    std::cout << std::endl;

    a.takeDamage(2);
    std::cout << a << std::endl;
    a.attack("test");
    a.beRepaired(3);
    std::cout << a << std::endl;

    std::cout << std::endl;

    ClapTrap b(a);
    b.takeDamage(2);
    std::cout << b << std::endl;
    b.attack("test");
    b.beRepaired(3);
    std::cout << b << std::endl;

    std::cout << std::endl;

    ClapTrap c("c");
    b = c;
    b.takeDamage(2);
    std::cout << b << std::endl;
    b.attack("test");
    b.beRepaired(3);
    std::cout << b << std::endl;

    std::cout << std::endl;

}