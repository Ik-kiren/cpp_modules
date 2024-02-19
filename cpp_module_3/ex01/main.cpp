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

    std::cout << "test---------" << std::endl;
    ScavTrap n(t);
    n.takeDamage(2);
    std::cout << n << std::endl;
    n.attack("test");
    n.beRepaired(3);
    std::cout << n << std::endl;

    ScavTrap l = t;
    l.takeDamage(2);
    std::cout << l << std::endl;
    l.attack("test");
    l.beRepaired(3);
    std::cout << l << std::endl;

}