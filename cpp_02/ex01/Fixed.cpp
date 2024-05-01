/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:08:46 by javier            #+#    #+#             */
/*   Updated: 2024/05/01 20:19:53 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// Constructor por defecto.
Fixed::Fixed()
{
	std::cout << "Default constructor called." << std::endl;
	this->_fixed_point = 0;
}

/*
Sobrecarga Constructor recibe int.

A constructor that takes a constant integer as a parameter.
It converts it to the corresponding fixed-point value. The fractional bits value is
initialized to 8 like in exercise 00
*/
Fixed::Fixed(const int integ)
{
	std::cout << "Int constructor called." << std::endl;
	_fixed_point = integ << _fractional_bits; // Equivale a multipilicar integ * 2⁸.Pilla un int y lo convierte a punto flotante.
}

//Sobrecarga constructor recibe float.
Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor called." << std::endl;
	_fixed_point = roundf(floating_point * (1 << _fractional_bits));//Pilla un float y lo convierte a punto flotante.
}

// Constructor de copia.
Fixed::Fixed(const Fixed& name)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = name;
}

// Sobrecarga operador de asignación.
const Fixed&	Fixed::operator =(const Fixed& name)
{
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &name) // Para evitar que se haga una reasignacion.
		_fixed_point = name._fixed_point; //name.getRawBits();  // (Modificación para output = que en subject)
	
	return (*this);
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

// Función miembro que devuelve el valor de _fixed_point.
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	
	return (this->_fixed_point);
}

// Funcion miembro para asignar un valor a _fixed_point.
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called." << std::endl;
	this->_fixed_point =raw;
}

//Funcion miembro que convierte el _fixed_point a float.
float	Fixed::toFloat(void) const
{
	float	res;
	res = ((float)_fixed_point / (1 << _fractional_bits));

	return (res);
}

//Funcion miembro que convierte el _fixed_point a int.
int	Fixed::toInt(void) const
{
	return (_fixed_point >> _fractional_bits);
}

std::ostream& operator<<(std::ostream& outstream, const Fixed& name)
{
	outstream << name.toFloat();
	return outstream;
}
