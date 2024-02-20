#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &src)
{
    this->type = src.type;
    return *this; 
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound(void) const
{

}
