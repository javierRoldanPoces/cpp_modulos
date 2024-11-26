#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"), _grade(150)
{

}

Bureaucrat::Bureaucrat(const std::string &name, int grade)
:_name(name)//, _grade(grade)
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
            throw Bureaucrat::GradeTooHighException();
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
	_grade = copy._grade;
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
		this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << this->getGrade() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "error: Grade too high ";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "error: Grade too low ";
}

std::ostream& operator<<(std::ostream& st, const Bureaucrat b)
{
	st <<b.getName()  << ", bureaucrat grade " << b.getGrade() << std::endl;
	return st;
}
