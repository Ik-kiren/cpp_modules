#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

protected:

std::string const	name;
std::string			target;
bool				isSigned;
int const			gradeToSign;
int const			gradeToExec;

AForm(void);

public :

	struct GradeTooHighException : public std::exception
	{
		virtual const char *what()const throw();
	};

	struct GradeTooLowException : public std::exception
	{
		virtual const char *what()const throw();
	};

	struct FormNotSigned : public std::exception
	{
		virtual const char *what()const throw();
	};

	struct FormAlreadySigned : public std::exception
	{
		virtual const char *what()const throw();
	};

	AForm(std::string _name, int _gradeToSign, int _gradeToExec);
	AForm(AForm const &src);
	virtual ~AForm(void);

	std::string	getName(void) const;
	bool			getIsSigned(void) const;
	int			getGradeToSign(void) const;
	int			getGradeToExec(void) const;

	void			beSigned(Bureaucrat &bureaucrat);
	void			execu:operator=te(Bureaucrat const &executor) const;
	virtual void	executeSpecial(void) const = 0;

	AForm &operator=(AForm const &rhs);
};

std::ostream &operator<<(std::ostream &out, AForm const &rhs);

#endif