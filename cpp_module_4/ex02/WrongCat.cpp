#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
    std::cout << "WrongCat constructor called" << std::endl;
    this->type = "cat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "miaou miaou" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    this->type = rhs.type;
    return *this;
}