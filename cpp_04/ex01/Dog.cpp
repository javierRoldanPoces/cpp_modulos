/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:01:55 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 19:09:52 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog()
:Animal("Dog")
{
	std::cout << "Dog Default Constructor called" << std::endl;
	this->_dog_brain = new Brain();
}

Dog::Dog(const Dog& copy)
:Animal("Dog")
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		this->Animal::_type = copy.Animal::_type;
		delete (this->_dog_brain);
		this->_dog_brain = new Brain(*copy._dog_brain);
	}
	return *this;
}

Dog::~Dog()
{
	delete (this->_dog_brain);
	std::cout << "Dog Destructor called" << std::endl;
}

void	Dog::makeSound()const
{
	std::cout << "Guau Guau" << std::endl;
}
