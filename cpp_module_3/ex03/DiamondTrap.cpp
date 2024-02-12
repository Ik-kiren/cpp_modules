#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap(), ClapTrap()
{
    this->hit_point = FragTrap::hit_point;
    this->energy_point = ScavTrap::energy_point;
    this->attack_damage = FragTrap::attack_damage;
    this->name = ClapTrap::name;
    this->ClapTrap::name = name + "_clap_name";
    std::cout << "DiamondTrap default constructor called" << std::endl;

    return ;
}

DiamondTrap::DiamondTrap(std::string _name) : FragTrap(_name), ScavTrap(_name), ClapTrap(_name)
{
    this->hit_point = FragTrap::hit_point;
    this->energy_point = ScavTrap::energy_point;
    this->attack_damage = FragTrap::attack_damage;
    this->name = _name;
    this->ClapTrap::name = _name + "_clap_name";
    std::cout << "DiamondTrap constructor called" << std::endl;

    return ;
}
DiamondTrap::~DiamondTrap(void)
{
    std::cout << "DiamondTrap destructor called" << std::endl;

    return ;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "i am DiamondTrap: " + this->name + " my ClapTrap name is " + this->ClapTrap::name << std::endl;
}