/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:48:09 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 19:37:03 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"


AAnimal::AAnimal()
{
	std::cout << "AAnimal Default constructor is called" << std::endl;
}
AAnimal::AAnimal(std::string type)
:_type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
}


AAnimal::~AAnimal()
{
	std::cout << "AAnimal Default destructor is called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy)
{
	std::cout << "AAnimal copy constructor is called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
}

AAnimal	&AAnimal::operator=(AAnimal const &copy)
{
	std::cout << "AAnimal Asigment operator called" << std::endl;
	if (this != &copy)
		this->_type = copy.getType();
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return this->_type;
}

void	AAnimal::setType(std::string type_value)
{
	this->_type = type_value;
}

