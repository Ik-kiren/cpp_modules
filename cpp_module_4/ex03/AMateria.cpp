#include "AMateria.hpp"

AMateria::AMateria(void) : type("default")
{
    std::cout << "AMateria constructor called" << std::endl;
}
AMateria::AMateria(const std::string &_type) : type(_type)
{
    std::cout << "AMateria parametric constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &amateria) : type(amateria.type)
{
    std::cout << "AMateria parametric constructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
    this->type = rhs.type;
    return *this;
}

const std::string &AMateria::getType(void) const
{
    return this->type;
}

AMateria *AMateria::clone(void) const
{
    return NULL;
}

void AMateria::use(ICharacter &target)
{
    return ;
}