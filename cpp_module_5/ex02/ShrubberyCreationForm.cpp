#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
  
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
  
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string shrubName = this->name + "_shrubbery";
    std::ofstream file(shrubName.c_str());
    if (this->isSigned && executor.getGrade() <= this->getGradeToExec() && executor.getGrade() <= this->getGradeToSign())
    {
        for (int i = 0; i < 3; i++)
        {
            file <<"       _-_        "<<"        _-_" << std::endl;
            file <<"    /~~   ~~\\    "<<"      /~~   ~~\\" << std::endl;
            file <<" /~~         ~~\\ "<<"   /~~         ~~\\" << std::endl;
            file <<"{               } "<<" {               }" << std::endl;
            file <<" \\  _-     -_  / "<<"   \\  _-     -_  /" << std::endl;
            file <<"   ~  \\\\ //  ~  "<<"      ~  \\\\ //  ~" << std::endl;
            file <<" _- -  | | _- _   "<<"  _- -  | | _- _" << std::endl;
            file <<"   _ - | |   -_   "<<"    _ - | |   -_" << std::endl;
            file <<"      // \\\\     "<<"         // \\\\" << std::endl;
        }
    }
    file.close();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    (void)rhs;
    return *this;
}