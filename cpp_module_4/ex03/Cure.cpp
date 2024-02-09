#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
    return new Cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}