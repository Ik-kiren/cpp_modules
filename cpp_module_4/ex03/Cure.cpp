#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void)
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone(void) const
{
    return new Cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
    (void)rhs;
    this->type = "cure";
    return *this;
}