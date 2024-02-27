#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
  
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
  
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
  
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned && executor.getGrade() <= this->getGradeToSign() && executor.getGrade() <= this->getGradeToExec())
	{
		srand(time(NULL));
		int random = rand() % 2;
		std::cout << "* drilling noises *" << std::endl;
		if (random)
			std::cout << this->name << " has been robotomized" << std::endl;
		else
			std::cout << this->name << " hasn't been robotomized" << std::endl;
	}
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return *this;
}