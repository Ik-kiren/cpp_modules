#include "Animal.hpp"

Animal::Animal(void) : type("animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src) : type(src.type)
{

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

Animal &Animal::operator=(Animal const &rhs)
{
    this->type = rhs.type;
    return *this;
}