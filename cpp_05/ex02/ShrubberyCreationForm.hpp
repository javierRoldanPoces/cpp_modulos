/*
ShrubberyCreationForm: Required grades: sign 145, exec 137
Create a file <target>_shrubbery in the working directory, 
and writes ASCII trees inside it.

All of them take only one parameter in their constructor: the target of the form. For
example, "home" if you want to plant shrubbery at home.
*/
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm: public AForm
{
    private:

    public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &copy);
		~ShrubberyCreationForm();
		execute(Bureaucrat const & executor) const; //Pendiente 
		//Create a file <target>_shrubbery in the working directory, and writes ASCII trees inside it
		void	createFileAscii()	const; //pendiente desarrollo

	class		ErrorFile:	public std::exception
	{
		public:
			const	char	*what() const throw();
	}
};

#endif