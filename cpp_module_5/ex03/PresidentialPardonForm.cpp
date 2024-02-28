#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
  
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentPardon", 25, 5)
{
    this->target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void PresidentialPardonForm::executeSpecial(void) const
{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    (void)rhs;
    return *this;
}