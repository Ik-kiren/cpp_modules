#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP

# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
private:

	RobotomyRequestForm(void);

public :

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm(void);

	virtual void	execute(Bureaucrat const &executor) const;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};

#endif