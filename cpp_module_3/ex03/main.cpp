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

    std::cout << std::endl;

    DiamondTrap d2(d);
    d2.takeDamage(2);
    std::cout << d2 << std::endl;
    d2.attack("test");
    d2.beRepaired(3);
    std::cout << d2 << std::endl;
    d2.whoAmI();

    std::cout << std::endl;
    
    /*DiamondTrap d3;

    d3.takeDamage(2);
    std::cout << d3 << std::endl;
    d3.attack("test");
    d3.beRepaired(3);
    std::cout << d3 << std::endl;
    d3.whoAmI();

    std::cout << std::endl;

    d3 = d2;

    std::cout << std::endl;

    d3.takeDamage(2);
    std::cout << d3 << std::endl;
    d3.attack("test");
    d3.beRepaired(3);
    std::cout << d3 << std::endl;
    d3.whoAmI();*/


}