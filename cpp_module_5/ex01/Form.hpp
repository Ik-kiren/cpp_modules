#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
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
bool				isSigned;
int const			gradeToSign;
int const			gradeToExec;

Form(void);

public :

	Form(std::string _name, int _gradeToSign, int _gradeToExec);
	Form(Form const &src);
	~Form(void);

  std::string	getName(void) const;
  bool			getIsSigned(void) const;
  int			getGradeToSign(void) const;
  int			getGradeToExec(void) const;

  void			beSigned(Bureaucrat &bureaucrat);

  Form &operator=(Form const &rhs);
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif