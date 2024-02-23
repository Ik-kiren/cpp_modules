#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "cat";
}

Cat::Cat(Cat const &cat)
{
    this->type = cat.type;
    this->brain = new Brain;
    *(this->brain) = *(cat.brain);
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &rhs)
{
    if (this->brain)
        delete brain;
    this->type = rhs.type;
    this->brain = new Brain;
    *(this->brain) = *(rhs.brain);
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "miaou miaou" << std::endl;
}

void Cat::setIdea(int nbr, std::string str)
{
    this->brain->setIdea(nbr, str);
}

std::string Cat::getIdea(int nbr) const
{
    return this->brain->getIdea(nbr);
}
