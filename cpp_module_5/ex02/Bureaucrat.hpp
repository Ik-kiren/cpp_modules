#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <cstdlib>
# include <exception>
# include "AForm.hpp"

class AForm;

class Bureaucrat
{
	struct GradeTooHighException : public std::exception
	{
		virtual const char *what()const throw();
	};

	struct GradeTooLowException : public std::exception
	{
		virtual const char *what()const throw();
	};

private:

    std::string const	name;
    int					grade;

	Bureaucrat(void);

public :

	Bureaucrat(std::string _name, int _grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(void);

	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string getName(void) const;
	int			getGrade(void) const;

	void		incrGrade(void);
	void		decrGrade(void);
	void		signForm(AForm &form);
	void		executeForm(AForm const &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif