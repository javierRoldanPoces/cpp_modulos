/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:56:20 by javier            #+#    #+#             */
/*   Updated: 2024/04/20 18:00:04 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructor por defecto.
Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed_point = 0;
}

// Constructor de copia.
Fixed::Fixed(const Fixed& name)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = name;
}

// Sobrecarga operador de asignación.
const Fixed&	Fixed::operator =(const Fixed& name)
{
    std::cout << "Copy assignment operator called" << std::endl;
	if (this != &name) // Para evitar que se haga una reasignacion.
		_fixed_point = name.getRawBits();  //name._fixed_point;	
	return (*this);
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Función miembro que devuelve el valor de _fixed_point
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point);
}

// Funcion miembro para asignar un valor a _fixed_point
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point =raw;
}
