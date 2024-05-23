#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* Pluto = new Dog();
	const Animal* Garfield = new Cat();

	std::cout << std::endl;

	delete Pluto;
	delete Garfield;
	std::cout << std::endl;

	const Animal* animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << std::endl;

	return 0;
}
