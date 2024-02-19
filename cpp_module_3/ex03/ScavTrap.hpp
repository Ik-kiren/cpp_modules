#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{

protected:

    int energy_point;

public:

    ScavTrap(void);
    ScavTrap(std::string _name);
    ScavTrap(ScavTrap const &src);
    ~ScavTrap(void);

    ScavTrap &operator=(ScavTrap const &rhs);

    void attack(const std::string &target);
    void guardGate(void);
};

#endif