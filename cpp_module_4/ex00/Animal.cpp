#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
    std::cout << "Animal constructor called" << std::endl;
}
Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
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
    std::cout << "WrongAnimal constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound(void) const
{

}