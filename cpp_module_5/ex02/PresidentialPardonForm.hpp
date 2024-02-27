#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:

	PresidentialPardonForm(void);

public :

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	~PresidentialPardonForm(void);

	virtual void	execute(Bureaucrat const &executor) const;

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
};

#endif