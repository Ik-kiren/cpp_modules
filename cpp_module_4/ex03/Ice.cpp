#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice.getType())
{
    std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice(void)
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria *Ice::clone() const
{
    return new Ice;
}

void Ice::use(ICharacter &target)
{
    std::cout << "*shoots an ice bolt at " + target.getName() + " *"<< std::endl;
}