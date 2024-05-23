/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:29:41 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 19:39:14 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"


Cat::Cat()
:AAnimal("Cat")
{
	std::cout << "Cat Default Constructor called" << std::endl;
	this->_cat_brain = new Brain();
}

Cat::Cat(const Cat& copy)
:AAnimal("Cat")
{
	std::cout << "Cat Copy Constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		this->AAnimal::_type = copy.AAnimal::_type;
		delete (this->_cat_brain);
		this->_cat_brain = new Brain(*copy._cat_brain);
	}
	return *this;
}

Cat::~Cat()
{
	delete (this->_cat_brain);
	std::cout << "Cat Destructor called" << std::endl;
}

void	Cat::makeSound()const
{
	std::cout << "Miauu Miauu" << std::endl;
}
