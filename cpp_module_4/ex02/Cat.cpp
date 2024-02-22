#include "Cat.hpp"

Cat::Cat(void) : Animal(), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "cat";
}

Cat::Cat(Cat &cat)
{
    *this = cat;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

Cat &Cat::operator=(const Cat &rhs)
{
    this->type = rhs.type;
    this->brain = new Brain;
    *(this->brain) = *(rhs.brain);
    return *this;
}

void Cat::makeSound(void) const
{
    std::cout << "miaou miaou motherfucker" << std::endl;
}
