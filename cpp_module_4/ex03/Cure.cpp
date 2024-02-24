#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << BOLDGREEN << "Cure constructor called" << RESET << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
    std::cout << BOLDGREEN << "Cure copy constructor called" << RESET << std::endl;
}

Cure::~Cure(void)
{
    std::cout << BOLDGREEN << "Cure destructor called" << RESET << std::endl;
}

AMateria *Cure::clone(void) const
{
    return new Cure;
}

void Cure::use(ICharacter &target)
{
    std::cout << GREEN << "* heals " + target.getName() + "'s wounds *" << RESET << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
    (void)rhs;
    this->type = "cure";
    return *this;
}