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

}