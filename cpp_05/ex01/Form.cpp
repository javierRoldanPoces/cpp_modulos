#include "Form.hpp"

Form::Form()
:_name("default"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{

}
Form::Form(const std::string &name, bool isSigned, int gSign, int gExec)
:_name(name), _isSigned(isSigned), _gradeSign(gSign), _gradeExecute(gExec)
{
    try
    {
        if (this->_gradeSign < 1 || this->_gradeExecute < 1)
            throw Form::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        if (this->_gradeSign < 1)
            std::cerr << e.what() << this->_gradeSign << std::endl;
        if (this->_gradeExecute < 1)
            std::cerr << e.what() << this->_gradeExecute << std::endl;
    }
    try
    {
        if (this->_gradeSign >150 || this->_gradeExecute > 150)
            throw Form::GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        if (this->_gradeSign > 150)
            std::cerr << e.what() << this->_gradeSign << std::endl;
        if (this->_gradeExecute > 150)
            std::cerr << e.what() << this->_gradeExecute << std::endl;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "error: Form grade too high: ";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "error: Form grade too low: ";
}