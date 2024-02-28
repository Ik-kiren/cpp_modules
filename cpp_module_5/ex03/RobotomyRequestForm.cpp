#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
  
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : AForm("RobotomyRequest", 72, 45)
{
	this->target = _target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
  
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
  
}

void RobotomyRequestForm::executeSpecial(void) const
{
	srand(time(NULL));
	int random = rand() % 2;
	std::cout << "* drilling noises *" << std::endl;
	if (random)
		std::cout << this->target << " has been robotomized" << std::endl;
	else
		std::cout << this->target << " hasn't been robotomized" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return *this;
}