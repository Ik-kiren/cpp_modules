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

	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	~RobotomyRequestForm(void);

	virtual void	executeSpecial(void) const;

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};

#endif