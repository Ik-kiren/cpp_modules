#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
  
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{

}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->isSigned)
        return;
    if (executor.getGrade() > this->getGradeToSign() || executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    else
        std::cout << this->name << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    (void)rhs;
    return *this;
}