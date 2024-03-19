#include "Form.hpp"

const char *Form::GradeTooHighException::what()const throw()
{
	return ("grade is too high");
}

const char *Form::GradeTooLowException::what()const throw()
{
	return ("grade is too low");
}

const char *Form::FormAlreadySigned::what() const throw()
{
    return ("form is already signed");   
}

Form::Form(void) : name("default"), gradeToSign(150), gradeToExec(150)
{
    this->isSigned = false;
}

Form::Form(std::string _name, int _gradeToSign, int _gradeToExec) : name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{
    if (_gradeToSign >= 151 || _gradeToExec >= 151)
        throw GradeTooLowException();
    else if (_gradeToSign <= 0 || _gradeToExec <= 0)
        throw GradeTooHighException();
    this->isSigned = false;
}

Form::Form(Form const &src): name(src.name), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec)
{
    this->isSigned = src.isSigned;
}

Form::~Form(void)
{
  
}

Form &Form::operator=(Form const &rhs)
{
    (void)rhs;
    return *this;
}

std::string Form::getName(void) const
{
    return this->name;
}

bool Form::getIsSigned(void) const
{
    return this->isSigned;
}

int Form::getGradeToSign(void) const
{
    return this->gradeToSign;
}

int Form::getGradeToExec(void) const
{
    return this->gradeToExec;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (this->isSigned)
        throw FormAlreadySigned();
    if (bureaucrat.getGrade() <= this->getGradeToSign())
    {
        this->isSigned = true;
        bureaucrat.signForm(*this);
    }
    else
    {
        bureaucrat.signForm(*this);
        throw GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &out, Form const &rhs)
{
    out << "name: " << rhs.getName() << std::endl;
    out << "form signed: " << rhs.getIsSigned() << std::endl;
    out << "grade to sign: " << rhs.getGradeToSign() << std::endl;
    out << "grade to exec: " << rhs.getGradeToExec();
    return out;
}