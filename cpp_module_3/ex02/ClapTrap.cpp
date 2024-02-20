#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("default"), hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string _name) : name(_name), hit_point(10), energy_point(10), attack_damage(0)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    this->name = src.name;
    this->hit_point = src.hit_point;
    this->energy_point = src.energy_point;
    this->attack_damage = src.attack_damage;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hit_point <= 0)
    {
        std::cout << "ClapTrap " + this->name + " is dead he can't attack" << std::endl;
        return ;
    }
    else if (this->energy_point <= 0)
    {
        std::cout << "ClapTrap " + this->name + " doesn't have enough energy point" << std::endl;
        return ;
    }
    this->energy_point--;
    std::cout << "ClapTrap " + this->name + " attacks " +  target + ", causing " << this->attack_damage << " points of damage!" << std::endl;
    return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_point <= 0)
    {
        std::cout << this->name + " is already dead" << std::endl;
        return ;
    }
    else if (this->energy_point <= 0)
    {
        std::cout << this->name + " has not enough energy point" << std::endl;
        return ;
    }
    std::cout << this->name + " has taken " << amount << " damage" << std::endl;
    this->hit_point -= amount;
    if (this->hit_point < 0)
            this->hit_point = 0;
    return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hit_point <= 0)
    {
        std::cout << this->name + " is dead and cannot repair itself" << std::endl;
        return ;
    }
    if (this->energy_point <= 0)
    {
        std::cout << this->name + " has not enough energy point" << std::endl;
        return ;
    }
    std::cout << this->name + " has repaired itself of " << amount << " hit point!" << std::endl;
    this->hit_point += amount;
    return ;
}

int ClapTrap::getHitPoint(void) const
{
    return this->hit_point;
}

std::ostream &operator<<(std::ostream &o, ClapTrap const &i)
{
    o << i.getName() << " hp = " << i.getHitPoint();
    return o;
}

std::string ClapTrap::getName(void) const
{
    return this->name;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    this->name = rhs.name;
    this->hit_point = rhs.hit_point;
    this->energy_point = rhs.energy_point;
    this->attack_damage = rhs.attack_damage;
    return *this;
}