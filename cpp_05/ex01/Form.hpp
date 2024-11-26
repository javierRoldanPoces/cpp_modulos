#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class   Form
 {
    private:
        const	std::string _name;
        bool	_isSigned;
        const	int _gradeSign;
		const	int _gradeExecute;
    
	public:
		Form();
		Form(const std::string &name, bool isSigned, int gSign, int gExec);
		Form(const Form &copy);
		Form& operator=(const Form &copy);

		~Form();

		//getter
		const 	std::string getName()const;
		bool	get_isSigned()const;
		int		get_gradeSign()const;
		int		get_gradeExecute()const;

		bool beSigned(const Bureaucrat& b); //Remember, grade 1 is higher than grade 2.
										//If the grade is too low, throw a Form::GradeTooLowException.
		/*
		The grades of the Form follow the same rules that apply to the Bureaucrat. Thus,
		the following exceptions will be thrown if a form grade is out of bounds:
		Form::GradeTooHighException and Form::GradeTooLowException.
		*/
		class	GradeTooHighException: public std::exception
		{
			public:
				const char *what()const throw();
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				const char *what()const throw();
		};

 };
 //overload of insertion

 std::ostream& operator<<(std::ostream& st, const Form& form);
	

 #endif
 /*
 OJO FALTA

Lastly, add a signForm() member function to the Bureaucrat. If the form got signed,
it will print something like:
<bureaucrat> signed <form>
Otherwise, it will print something like:
<bureaucrat> couldn’t sign <form> because <reason>.
Implement and turn in some tests to ensure everything works as expected.
 
 */