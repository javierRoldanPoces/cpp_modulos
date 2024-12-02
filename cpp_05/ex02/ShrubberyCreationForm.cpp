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
		
		~ShrubberyCreationForm();

};



#endif