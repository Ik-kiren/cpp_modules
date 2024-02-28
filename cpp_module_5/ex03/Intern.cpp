#include "Intern.hpp"

Intern::Intern(void)
{
  
}

Intern::Intern(Intern const &src)
{
    (void)src;
}

Intern::~Intern(void)
{
  
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};

    size_t  i = 0;

    while (i < 3)
    {
        if (!name.compare(tab[i]))
            break;
        i++;
    }

    switch (i)
    {
    case 0:
        return new RobotomyRequestForm(target);
    case 1:
        return new PresidentialPardonForm(target);
    case 2:
        return new ShrubberyCreationForm(target);
    default:
        throw FormNameError();
        break;
    }
}

const char *Intern::FormNameError::what() const throw()
{
    return "name of the form doesn't exist";
}

Intern &Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    return *this;
}