#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "dog";
}

Dog::~Dog()
{

}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}