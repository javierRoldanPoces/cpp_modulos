/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:18:04 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 18:21:54 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor is called" << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
:_type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}


WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Default destructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal copy constructor is called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "WrongAnimal Asigment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::setType(std::string type_value)
{
	this->_type = type_value;
}

void	WrongAnimal::makeSound() const
{
	// if (this->get_Type() == "cat")
	// 	std::cout << "Guau Guau Guau" << std::endl;
	// else if (this->get_Type() == "dog")
	// 	std::cout << "Miaou Miaou Miaou" << std::endl;
	// else
	 	std::cout << "What happens?¿" << std::endl;
}