#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;

    return ;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
    this->hit_point = 100;
    this->energy_point = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;

    return ;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;

    return ;
}
void ScavTrap::attack(const std::string &target)
{
    if (this->hit_point <= 0)
    {
        std::cout << "ScavTrap " + this->name + " is dead he can't attack" << std::endl;
        return ;
    }
    else if (this->energy_point <= 0)
    {
        std::cout << "ScavTrap " + this->name + " doesn't have enough energy point" << std::endl;
        return ;
    }
    this->energy_point--;
    std::cout << "ScavTrap " + this->name + " attacks " +  target + ", causing " << this->attack_damage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << this->name << " is now in gate keeper mode" << std::endl;

    return ;
}