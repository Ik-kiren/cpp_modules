#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "cat";
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "miaou miaou motherfucker" << std::endl;
}

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "cat";
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "woof woof motherfucker" << std::endl;
}