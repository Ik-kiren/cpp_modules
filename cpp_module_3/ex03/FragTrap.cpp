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

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{

}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap default destructor called" << std::endl;

    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " + this->name + " high fived the wind" << std::endl;

    return ;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
{
    this->name = rhs.name;
    this->hit_point = rhs.hit_point;
    this->energy_point = rhs.energy_point;
    this->attack_damage = rhs.attack_damage;

    return *this;
}