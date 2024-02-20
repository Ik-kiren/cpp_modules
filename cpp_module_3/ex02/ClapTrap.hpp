#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{

protected:

    std::string name;
    int hit_point;
    int energy_point;
    int attack_damage;

public:

    ClapTrap(void);
    ClapTrap(std::string _name);
    ClapTrap(ClapTrap const &src);
    ~ClapTrap(void);

    int getHitPoint(void) const;
    std::string getName(void) const;

    ClapTrap &operator=(ClapTrap const &rhs);

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amout);
    
};

std::ostream &operator<<(std::ostream &o, ClapTrap const &i);

#endif