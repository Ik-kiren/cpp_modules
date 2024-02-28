#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what()const throw()
{
	return ("grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what()const throw()
{
	return ("grade is too low");
}

Bureaucrat::Bureaucrat(void) : name("default"), grade(150)
{

}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	if (_grade <= 0)
		throw GradeTooHighException();
	else if (_grade >= 151)
		throw GradeTooLowException();
	else
		this->grade = _grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name), grade(src.grade)
{

}

Bureaucrat::~Bureaucrat(void)
{

}

std::string Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::incrGrade()
{
	if (this->grade - 1 <= 0)
		throw GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrGrade()
{
	if (this->grade + 1 >= 151)
		throw GradeTooLowException();
	else
		this->grade++;
}

void Bureaucrat::signForm(AForm &form)
{
	if (form.getIsSigned())
		std::cout << this->name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->name << " couldn't sign " << form.getName() << " because " << this->grade << " is lower than " << form.getGradeToSign() << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	(void)rhs;
	return *this;
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		throw ;
	}
	std::cout << this->name << " executed " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return out;
}
