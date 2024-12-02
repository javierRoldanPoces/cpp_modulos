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
		{
          	_grade = 1;
			throw Bureaucrat::GradeTooHighException();

		}
        else if (grade > 150)
		{
			_grade = 150;
            throw Bureaucrat::GradeTooLowException();
		}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << grade << std::endl;
    }
    
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
:_name(copy._name), _grade(copy._grade)
{

}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this != &copy)	
		_grade = copy._grade; //Tb podriamos usar el método get_grade
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

const std::string	Bureaucrat::getName()const
{
	return this->_name;
}

int	Bureaucrat::getGrade()const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	try
	{
		if (this->_grade <= 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << this->getGrade() << std::endl;
	}
}

void Bureaucrat::decrementGrade()
{
	try
	{
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << this->getGrade() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "error: Grade too high: ";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "error: Grade too low: ";
}

const char *Bureaucrat::AFormSignedException::what() const throw()
{
	return "Not enough grade for signing";
}

const char *Bureaucrat::AlreadySignedAFormException::what() const throw()
{
	return "AForm already signed";
}

std::ostream& operator<<(std::ostream& st, const Bureaucrat b)
{
	st <<b.getName()  << ", bureaucrat grade " << b.getGrade() << std::endl;
	return st;
}

void	Bureaucrat::signAForm(AForm& AForm)
{
	try
	{
		if (AForm.get_isSigned())
			throw Bureaucrat::AlreadySignedAFormException();
		if (AForm.beSigned(*this) == true)
			std::cout << this->getName() << " signed " << AForm.getName() << std::endl;
		else
			throw Bureaucrat::AFormSignedException();
	}
	catch(const Bureaucrat::AFormSignedException &exception)
	{
		std::cerr << "Error: " << AForm.getName() << ", because " << this->getName() << " has " << exception.what() << std::endl;
	}
	catch(const Bureaucrat::AlreadySignedAFormException &exception)
	{
		std::cerr << "Error: " << this->getName() << ", cannot sign " << AForm.getName() << ", because " << exception.what() << std::endl;

	}

}



