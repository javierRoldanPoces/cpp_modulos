#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	//const AAnimal* test = new AAnimal();
	const AAnimal* test = new Dog();
	//const AAnimal* test = new Cat();
	//std::cout << test->getType() << std::endl;
	delete(test);
	return 0;
}