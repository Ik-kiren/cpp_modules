#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{

}
Animal::~Animal(void)
{

}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound(void) const
{

}

WrongAnimal::WrongAnimal(void) : type("animal")
{

}
WrongAnimal::~WrongAnimal(void)
{

}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{

}