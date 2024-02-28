#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{
  
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target) : AForm("ShrubberyCreation", 145, 137)
{
    this->target = _target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
  
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void ShrubberyCreationForm::executeSpecial(void) const
{
    std::string shrubName = this->target + "_shrubbery";
    std::ofstream file(shrubName.c_str());
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
    file.close();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    (void)rhs;
    return *this;
}