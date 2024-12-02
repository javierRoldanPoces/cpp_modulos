#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    //Creamos Burocratas
    Bureaucrat b1("Juan", 1);
    Bureaucrat b2("Javi", 149);
    Bureaucrat b3("Buracrata_Excepcion_01", -1); // excepcion tooHigh
    Bureaucrat b4("Burocrata_Excepcion_02", 151); // excepcion TooLow

    std::cout << "\n\n" <<std::endl;

   //Impresion de Burocratas

	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl;
	std::cout << b4 << std::endl;
  
    //Creacion de form
    Form();
    Form F1("F1", 1, 1);
    Form F2("F2", 150, 150);
    Form F3("F3", 11, 1151); // excepcion
    Form F4("F4", 180, 1); // excepcion
    Form F5("F5", 190, 154); // 2 excepciones

	std::cout << "\n\n" <<std::endl;

	//Impresion de Form
    
    std::cout << F1 << std::endl;
	std::cout << F2 << std::endl;
	std::cout << F3 << std::endl;
	std::cout << F4 << std::endl;
	std::cout << F5 << std::endl;
  
    
    //Firmas

	b1.signForm(F1);
	b2.signForm(F1); //No puede firmar excepcion pq ya esta firmado
	b2.signForm(F4);
	b3.signForm(F3);
	//ya esta frimado y ademas no tiene grados suficiente paera firmarlo
	b2.signForm(F1);
    std::cout << std::endl;
   
   //Impresion formulario ya firmado 
    std::cout << F1 << std::endl;

}
