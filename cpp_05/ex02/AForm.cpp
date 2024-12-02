#include "AForm.hpp"


void AForm::check_grade(const int grade)
{
	if(grade < 1)
		throw AForm::GradeTooHighException();
	else if (grade > 150)
		throw AForm::GradeTooLowException();
}


AForm::AForm()
:_name("default"), _isSigned(false), _gradeSign(150), _gradeExecute(150)
{

}
AForm::AForm(const std::string &name, int gSign, int gExec)
:_name(name),_isSigned(false),  _gradeSign(gSign), _gradeExecute(gExec)
{
    try
	{
		check_grade(_gradeSign);
	}
	catch (const AForm::GradeTooHighException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeSign value" << std::endl;
	}
	catch (const AForm::GradeTooLowException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeSign value" << std::endl;

	}

    try
	{
		check_grade(_gradeExecute);
	}
	catch (const AForm::GradeTooHighException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeExecute value" << std::endl;
	}
	catch (const AForm::GradeTooLowException &exception)
	{
		std::cerr << "Error: " << exception.what() << " for gradeExecute value" << std::endl;

	}

}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "AForm grade too high: ";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "AForm grade too low: ";
}

AForm::AForm(const AForm &copy)
:_name(copy._name), _isSigned(copy._isSigned), _gradeSign(copy._gradeSign), _gradeExecute(copy._gradeExecute)
{

}

AForm& AForm::operator=(const AForm &copy)
{
    if (this != &copy)
        this->_isSigned = copy._isSigned; // Solo habria q igualar este atributo pq los demas son cons
    return *this;
}

AForm::~AForm()
{

}

const 	std::string AForm::getName()const
{
    return this->_name;
}

bool	AForm::get_isSigned()const
 {
    return this->_isSigned;
 }

int		AForm::get_gradeSign()const
{
    return this->_gradeSign;
}

int     AForm::get_gradeExecute()const
{
    return this->_gradeExecute;
}

std::string	AForm::get_target()const
{
    return this->_target;
}

bool AForm::beSigned(const Bureaucrat& b)
{
    if (b.getGrade() <= this->get_gradeSign())
    {
        this->_isSigned = true;
        return true;
    }
    else
        return false;
}

 std::ostream& operator<<(std::ostream& st, const AForm& AForm)
 {
	st << "\nAForm Name: " << AForm.getName() << std::endl
	<< "AForm isSigned: " << AForm.get_isSigned() << std::endl
	<< "AForm gradeSign: " << AForm.get_gradeSign() << std::endl
	<< "AForm graExecute " << AForm.get_gradeExecute() <<std::endl; 
    return st;
 }

