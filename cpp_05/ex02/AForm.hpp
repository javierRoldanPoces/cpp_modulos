#ifndef AForm_HPP
#define AForm_HPP
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class	Bureaucrat;

class   AForm
 {
    private:
        const	std::string _name;
        bool	_isSigned;
        const	int _gradeSign;
		const	int _gradeExecute;
    
	protected:
		std::string _target;

	public:
		AForm();
		AForm(const std::string &name, int gSign, int gExec);
		AForm(const AForm &copy);
		AForm& operator=(const AForm &copy);

		~AForm();

		const 		std::string getName()const;
		bool		get_isSigned()const;
		int			get_gradeSign()const;
		int			get_gradeExecute()const;
		std::string	get_target()const;
		void	check_grade(const int grade);

		bool beSigned(const Bureaucrat& b); 

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

 std::ostream& operator<<(std::ostream& st, const AForm& AForm);
	

 #endif
