#include "Weapon.hpp"

Weapon::Weapon(void) : type("default")
{

}

Weapon::Weapon(std::string _type) : type(_type)
{

}

Weapon::~Weapon()
{

}

std::string Weapon::getType(void) const
{
    return this->type;
}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}