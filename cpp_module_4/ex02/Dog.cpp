#include "Dog.hpp"

Dog::Dog(void) : Animal(), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "dog";
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &rhs)
{
    this->type = rhs.type;
    this->brain = new Brain;
    *(this->brain) = *(rhs.brain);
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}