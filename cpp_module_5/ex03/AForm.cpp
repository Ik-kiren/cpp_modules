#include "AForm.hpp"

const char *AForm::GradeTooHighException::what()const throw()
{
	return ("grade is too high");
}

const char *AForm::GradeTooLowException::what()const throw()
{
	return ("grade is too low");
}

const char *AForm::FormNotSigned::what() const throw()
{
    return ("form is not signed");
}

const char *AForm::FormAlreadySigned::what() const throw()
{
    return ("form is already signed");   
}

AForm::AForm(void) : name("default"), gradeToSign(150), gradeToExec(150)
{
    this->isSigned = false;
}

AForm::AForm(std::string _name, int _gradeToSign, int _gradeToExec) : name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{
    if (_gradeToSign >= 151 || _gradeToExec >= 151)
        throw GradeTooLowException();
    else if (_gradeToSign <= 0 || _gradeToExec <= 0)
        throw GradeTooHighException();
    this->isSigned = false;
}

AForm::AForm(AForm const &src): name(src.name), gradeToSign(src.gradeToSign), gradeToExec(src.gradeToExec)
{
    this->isSigned = src.isSigned;
}

AForm::~AForm(void)
{
  
}

AForm &AForm::operator=(AForm const &rhs)
{
    (void)rhs;
    return *this;
}

std::string AForm::getName(void) const
{
    return this->name;
}

bool AForm::getIsSigned(void) const
{
    return this->isSigned;
}

int AForm::getGradeToSign(void) const
{
    return this->gradeToSign;
}

int AForm::getGradeToExec(void) const
{
    return this->gradeToExec;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
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

void AForm::execute(Bureaucrat const &executor) const
{
     if (!this->isSigned)
        throw FormNotSigned();
    else if (executor.getGrade() > this->getGradeToSign() || executor.getGrade() > this->getGradeToExec())
        throw GradeTooLowException();
    else
        this->executeSpecial();
}

std::ostream &operator<<(std::ostream &out, AForm const &rhs)
{
    out << "name: " << rhs.getName() << std::endl;
    out << "AForm signed: " << rhs.getIsSigned() << std::endl;
    out << "grade to sign: " << rhs.getGradeToSign() << std::endl;
    out << "grade to exec: " << rhs.getGradeToExec();
    return out;
}