#include "Bureaucrat.hpp"
#include <iostream>
#include <stdlib.h>

int main()
{
    Bureaucrat Javi("Javi", 1);
     std::cout << Javi << std::endl;
    Bureaucrat  out_range("out_range", 160);//excepcion
     std::cout << out_range << std::endl;
    Bureaucrat pepe;
    std::cout << pepe << std::endl;

    Javi.decrementGrade();
    std::cout << Javi << std::endl;
    Javi.decrementGrade();
    std::cout << Javi << std::endl;
    Javi.decrementGrade();
    std::cout << Javi << std::endl;


    for (int i=0; i < 10; i++)
    {
		Javi.incrementGrade();
        std::cout << Javi << std::endl;
    }   
    
    std::cout << Javi << std::endl;  
    std::cout <<"Igualamos out:range = javi"  << std::endl;

    out_range = Javi;
     std::cout << out_range << std::endl;
   
	//std::cout << pepe;
    return 0;
}