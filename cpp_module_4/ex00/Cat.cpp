#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    this->type = "cat";
}

Cat::~Cat(void)
{

}

void Cat::makeSound(void) const
{
    std::cout << "miaou miaou motherfucker" << std::endl;
}

WrongCat::WrongCat(void) : WrongAnimal()
{
    this->type = "cat";
}

WrongCat::~WrongCat(void)
{

}

void WrongCat::makeSound(void) const
{
    std::cout << "woof woof motherfucker" << std::endl;
}