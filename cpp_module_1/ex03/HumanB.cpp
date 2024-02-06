#include "HumanB.hpp"

HumanB::HumanB(std::string _name) : name(_name)
{
    this->weapon = NULL;
}

HumanB::~HumanB()
{

}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{   
    if (this->weapon != NULL)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

