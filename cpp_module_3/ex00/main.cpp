#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");

    a.takeDamage(2);
    std::cout << a << std::endl;
    a.attack("test");
    a.beRepaired(3);
    std::cout << a << std::endl;
}