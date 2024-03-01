#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <exception>

class Intern
{
private:

AForm	*NewShrub(std::string target);
AForm	*NewPres(std::string target);
AForm	*NewRobot(std::string target);

public :

	struct FormNameError : public std::exception
	{
		virtual const char *what() const throw();
	};

  Intern(void);
  Intern(Intern const &src);
  ~Intern(void);

  AForm *makeForm(std::string name, std::string target);

  Intern &operator=(Intern const &rhs);
};

typedef AForm *(Intern::*Functionptr)(std::string);

#endif