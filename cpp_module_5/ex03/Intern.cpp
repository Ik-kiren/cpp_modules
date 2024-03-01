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

AForm *Intern::NewShrub(std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::NewPres(std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::NewRobot(std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    std::string tab[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
    Functionptr functionptr[] = {&Intern::NewRobot, &Intern::NewPres, &Intern::NewShrub};

    size_t  i = 0;

    while (i < 3)
    {
        if (!name.compare(tab[i]))
            return (this->*functionptr[i])(target);
        i++;
    }
    throw FormNameError();
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