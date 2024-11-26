#include "Bureaucrat.hpp"
#include <iostream>
#include <stdlib.h>

int main()
{
    Bureaucrat Javi("Javi", 1);
    Bureaucrat  out_range("out_range", 160);
    Bureaucrat pepe;
    std::cout << out_range;

    Javi.decrementGrade();
    Javi.decrementGrade();
    Javi.decrementGrade();

    std::cout << Javi;

    for (int i=0; i < 10; i++)
        Javi.incrementGrade();
    

    std::cout << Javi;
    std::cout << out_range;

    out_range = Javi;
    std::cout << out_range;

    std::cout << pepe;
    return 0;
}