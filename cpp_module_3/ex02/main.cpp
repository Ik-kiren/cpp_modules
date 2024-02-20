#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("a");
    ScavTrap t("t");
    FragTrap f("f");

    std::cout << std::endl;

    a.takeDamage(2);
    std::cout << a << std::endl;
    a.attack("test");
    a.beRepaired(3);
    std::cout << a << std::endl;

    std::cout << std::endl;

    t.takeDamage(2);
    std::cout << t << std::endl;
    t.attack("test");
    t.beRepaired(3);
    std::cout << t << std::endl;
    t.guardGate();

    std::cout << std::endl;

    f.takeDamage(2);
    std::cout << f << std::endl;
    f.attack("test");
    f.beRepaired(3);
    std::cout << f << std::endl;
    f.highFivesGuys();

    std::cout << std::endl;

    /*FragTrap ft(f);
    ft.takeDamage(2);
    std::cout << ft << std::endl;
    ft.attack("test");
    ft.beRepaired(3);
    std::cout << t << std::endl;
    ft.highFivesGuys();*/
}