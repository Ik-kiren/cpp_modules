#include "Dog.hpp"

Dog::Dog(void) : Animal(), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "dog";
}

Dog::Dog(const Dog &dog) : Animal()
{
    this->type = dog.type;
    this->brain = new Brain;
    *(this->brain) = *(dog.brain);
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

Dog &Dog::operator=(const Dog &rhs)
{
    if (this->brain)
        delete brain;
    this->type = rhs.type;
    this->brain = new Brain;
    *(this->brain) = *(rhs.brain);
    return *this;
}

void Dog::makeSound(void) const
{
    std::cout << "woof woof" << std::endl;
}

void Dog::setIdea(int nbr, std::string str)
{
    this->brain->setIdea(nbr, str);
}

std::string Dog::getIdea(int nbr) const
{
    return this->brain->getIdea(nbr);
}