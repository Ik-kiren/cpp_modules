#include "Dog.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "dog";
}

Dog::Dog(Dog const &src) : Animal(src)
{

}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    this->type = rhs.type;
    return *this;
}