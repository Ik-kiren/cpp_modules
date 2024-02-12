#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;

public:

    DiamondTrap(void);
    DiamondTrap(std::string _name);
    ~DiamondTrap();

    using ScavTrap::attack;
    void whoAmI(void);
};

#endif