#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("a");
    ScavTrap t("t");

    a.takeDamage(2);
    std::cout << a << std::endl;
    a.attack("test");
    a.beRepaired(3);
    std::cout << a << std::endl;

    t.takeDamage(2);
    std::cout << t << std::endl;
    t.attack("test");
    t.beRepaired(3);
    std::cout << t << std::endl;
}