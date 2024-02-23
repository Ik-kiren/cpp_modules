#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("animal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : type(src.type)
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
    std::cout << "placeholder" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    this->type = rhs.type;
    return *this;
}