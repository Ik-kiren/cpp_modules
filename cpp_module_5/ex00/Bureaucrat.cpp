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

void Bureaucrat:: incrGrade()
{
	if (this->grade - 1 <= 0)
		throw GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat:: decrGrade()
{
	if (this->grade + 1 >= 151)
		throw GradeTooLowException();
	else
		this->grade++;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	(void)rhs;
	return *this;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}
