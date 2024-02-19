#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "cat";
}

Cat::Cat(Cat const &src) : Animal(src)
{

}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "miaou miaou motherfucker" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    this->type = rhs.type;
    return *this;
}