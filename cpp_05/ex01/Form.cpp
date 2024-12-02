#include "Form.hpp"


void Form::check_grade(const int grade)
{
	if(grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
}


Form::Form()
:_name("default"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{

}
Form::Form(const std::string &name, int gSign, int gExec)
:_name(name),_isSigned(false),  _gradeSign(gSign), _gradeExecute(gExec)
{
    try
	{
		check_grade(_gradeSign);
	}
	catch (const Form::GradeTooHighException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeSign value" << std::endl;
	}
	catch (const Form::GradeTooLowException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeSign value" << std::endl;

	}

    try
	{
		check_grade(_gradeExecute);
	}
	catch (const Form::GradeTooHighException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeExecute value" << std::endl;
	}
	catch (const Form::GradeTooLowException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeExecute value" << std::endl;

	}

	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
    // {
    //     if (this->_gradeSign < 1 || this->_gradeExecute < 1)
    //         throw Form::GradeTooHighException();
    // }
    // catch(const std::exception& e)
    // {
    //     if (this->_gradeSign < 1)
    //         std::cerr << e.what() << this->_gradeSign << std::endl;
    //     else
    //         std::cerr << e.what() << this->_gradeExecute << std::endl;
    // }
  
    // try
    // {
    //     if (this->_gradeSign > 150 || this->_gradeExecute > 150)
    //         throw Form::GradeTooLowException();
    // }
    // catch(const std::exception& e)
    // {
    //     if (this->_gradeSign > 150)
    //         std::cerr << e.what() << this->_gradeSign << std::endl;
    //     else
    //         std::cerr << e.what() << this->_gradeExecute << std::endl;
    // }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Form grade too high: ";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Form grade too low: ";
}

Form::Form(const Form &copy)
:_name(copy._name), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{

}

Form& Form::operator=(const Form &copy)
{
    if (this != &copy)
        this->_isSigned = copy._isSigned; // Solo habria q igualar este atributo pq los demas son cons
    return *this;
}

Form::~Form()
{

}

const 	std::string Form::getName()const
{
    return this->_name;
}

bool	Form::get_isSigned()const
 {
    return this->_isSigned;
 }

int		Form::get_gradeSign()const
{
    return this->_gradeSign;
}

int     Form::get_gradeExecute()const
{
    return this->_gradeExecute;
}

bool Form::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= this->get_gradeSign())
    {
        this->_isSigned = true;
        return true;
    }
    else
        return false;
}

 std::ostream& operator<<(std::ostream& st, const Form& form)
 {
	st << "\nForm Name: " << form.getName() << std::endl
	<< "Form isSigned: " << form.get_isSigned() << std::endl
	<< "Form gradeSign: " << form.get_gradeSign() << std::endl
	<< "Form graExecute " << form.get_gradeExecute() <<std::endl; 
    return st;
 }

