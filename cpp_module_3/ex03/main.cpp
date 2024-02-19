#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap d("D");

    d.takeDamage(2);
    std::cout << d << std::endl;
    d.attack("test");
    d.beRepaired(3);
    std::cout << d << std::endl;
    d.whoAmI();

    DiamondTrap d2(d);
    d2.takeDamage(2);
    std::cout << d << std::endl;
    d2.attack("test");
    d2.beRepaired(3);
    std::cout << d2 << std::endl;
    d2.whoAmI();

}