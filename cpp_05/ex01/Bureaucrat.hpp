#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>

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
		//getter setter
		const std::string	getName()const;
		int	getGrade()const;
		void	incrementGrade();
		void	decrementGrade();

		void	signForm(Form& form);

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
// Tendriamos que crear dos excepciones uno si el grado no es suficiente para firmar y otra si el form ya esta firmado
		class	

};

	std::ostream& operator<<(std::ostream& st, const Bureaucrat b);

#endif