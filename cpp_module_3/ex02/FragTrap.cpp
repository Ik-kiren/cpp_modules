#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    this->hit_point = 100;
    this->energy_point = 100;
    this-> attack_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;

    return ;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
    this->hit_point = 100;
    this->energy_point = 100;
    this-> attack_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;

    return ;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;

    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " + this->name + " high fived the wind" << std::endl;

    return ;
}