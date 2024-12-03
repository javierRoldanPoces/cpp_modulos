#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
:AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = "default_target";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
:AForm("ShrubberyCreationForm", 145, 137)
{
    this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
:AForm(copy.getName, copy.get_gradeSign, copy.get_gradeExecute)
{
    this->_target = copy.get_target;
}
ShrubberyCreationForm::ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
        this->_target = copy.get_target();
    return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

const char	*ShrubberyCreationForm::FileNotOpen::what(void) const throw()
{
    return "Unable to open file";
}
//Continue
ShrubberyCreationForm::execute(Bureaucrat const & executor) const;
{

}

void	ShrubberyCreationForm::createFileAscii()	const
{

}

