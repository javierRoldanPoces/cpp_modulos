#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;
 
	public:
		Bureaucrat();//constructor x defecto
		Bureaucrat(const std::string &name, int grade); //Constructor
		Bureaucrat(const Bureaucrat &copy);//Constructor de copia
		Bureaucrat&	operator=(const Bureaucrat &copy); //Sobrecarga constructor de asignacion

		~Bureaucrat();//Destructor
		//getter
		const std::string	getName()const;
		int					getGrade()const;
		void				incrementGrade();
		void				decrementGrade();

		void	signAForm(AForm& AForm);//Nuevo metodo ex01

		class	GradeTooHighException: public std::exception
		{
			public:
				const	char*	what()const throw(); 
		};

		class	GradeTooLowException: public std::exception
		{
			public:
				const char*	what()const throw();
		};
// Tendriamos que crear dos excepciones uno si el grado del burocrata no es suficiente para firmar y otra si el AForm ya esta firmado
		class	AFormSignedException: public std::exception
		{
			public:
				const char* what()const throw();
		};

		class	AlreadySignedAFormException: public std::exception
		{
			public:
				const char* what()const throw();
		};
};

	std::ostream& operator<<(std::ostream& st, const Bureaucrat b);

#endif