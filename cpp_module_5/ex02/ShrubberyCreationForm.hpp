#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
private:

	ShrubberyCreationForm(void);

public :

	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	~ShrubberyCreationForm(void);

	virtual void	execute(Bureaucrat const &executor) const;

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};

#endif