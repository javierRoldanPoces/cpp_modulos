#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
:_name(name), _grade(grade)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        else if (grade > 150)
            throw Bureaucrat::GradeTooHighException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << grade << std::endl;
    }
    
}