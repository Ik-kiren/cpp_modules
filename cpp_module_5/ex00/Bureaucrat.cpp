#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what()const throw()
{
	return ("grade is too high");
}

const char *Bureaucrat::GradeTooHighException::what()const throw()
{
	return ("grade is too low");
}

Bureaucrat::Bureaucrat(void)
{
  
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	try
	{
		if (_grade < 0)
			throw GradeTooLowException();
		else if (_grade > 0)
			throw GradeTooHighException();
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
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
	try
	{
		this->grade--;
		if (this->grade <= 0)
			throw GradeTooLowException();
	}
	catch (GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	this->grade--;
}

void Bureaucrat:: decrGrade()
{
	try
	{
		this->grade++;
		if (this->grade >= 151)
			throw GradeTooHighException();
	}
	catch (GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{

}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << src.getName() << ", bureaucrat grade " << src.getGrade();
	return out;
}
