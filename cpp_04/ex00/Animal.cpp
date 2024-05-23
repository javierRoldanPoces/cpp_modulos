/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:48:09 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 18:33:52 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
{
	std::cout << "Animal Default constructor is called" << std::endl;
}
Animal::Animal(std::string type)
:_type(type)
{
	std::cout << "Animal constructor called" << std::endl;
}


Animal::~Animal()
{
	std::cout << "Animal Default destructor is called" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "Animal copy constructor is called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
}

Animal	&Animal::operator=(Animal const &copy)
{
	std::cout << "Animal Asigment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::setType(std::string type_value)
{
	this->_type = type_value;
}

void	Animal::makeSound() const
{

}
