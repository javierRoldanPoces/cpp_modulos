/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 17:24:03 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 18:32:49 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    // Animal Juan;
    // Juan.set_type("dog");
    // std::cout << "el objeto de clase animal es un " << Juan.get_Type() << std::endl;
    // Juan.makeSound();
    
	const Animal* meta = new Animal();
	std::cout << "-" << meta->getType() << std::endl;
    meta->makeSound();
	std::cout << std::endl;

    const Animal* cat_garfield = new Cat();
    std::cout << cat_garfield->getType() << " " << std::endl;
    cat_garfield->makeSound();

    const Animal* dog_Niebla = new Dog();
    std::cout << dog_Niebla->getType() << " " << std::endl;
    dog_Niebla->makeSound();

	delete(meta);
    delete(cat_garfield);
    delete(dog_Niebla);

    const	WrongAnimal* Animal_Wrong = new WrongAnimal();
	const	WrongAnimal* Cat_Wrong = new WrongCat();
	
	Animal_Wrong->makeSound();
	Cat_Wrong->makeSound();

	delete(Animal_Wrong);
	delete(Cat_Wrong);
}

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();

// }