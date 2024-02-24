#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << BOLDBLUE << "Ice constructor called" << RESET << std::endl;
}

Ice::Ice(const Ice &src) : AMateria(src)
{
    std::cout << BOLDBLUE << "Ice copy constructor called" << RESET << std::endl;
}

Ice::~Ice(void)
{
    std::cout << BOLDBLUE << "Ice destructor called" << RESET << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
    (void)rhs;
    this->type = "ice";
    return *this;
}

AMateria *Ice::clone() const
{
    return new Ice;
}

void Ice::use(ICharacter &target)
{
    std::cout << BLUE << "*shoots an ice bolt at " + target.getName() + " *"<< RESET << std::endl;
}