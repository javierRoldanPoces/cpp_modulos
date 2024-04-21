/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 23:51:59 by javier            #+#    #+#             */
/*   Updated: 2024/04/22 01:37:52 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // Add the missing include path for the iostream library

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
    private:
        int _fixed_point;
		static const int	_fractional_bits = 8;  
    public:
		//Costructor
		Fixed();
		//Constructor de copia
		Fixed(const Fixed& name);
		//Constructor int
		Fixed(const int integ);
		//Constructor float
		Fixed(const float floating_point);
        //destructor
		~Fixed();
		//Sobrecarga de operador de asignacion
		const Fixed& operator =(const Fixed& name);
		// Funciones miembros de la clase
		int getRawBits(void) const;
		void setRawBits(int const raw);
		//x02 Sobrecarga operadores comparacion
        bool    operator>(const Fixed& name) const;
        bool    operator<(const Fixed& name) const;
        bool    operator>=(const Fixed& name) const;
        bool    operator<=(const Fixed& name) const;
        bool    operator==(const Fixed& name) const;
		bool	operator!=(const Fixed& name) const;
		//• The 4 arithmetic operators: +, -, *, and /.
		Fixed	operator+(const Fixed& name) const;
		Fixed	operator-(const Fixed& name) const;
		Fixed	operator*(const Fixed& name) const;
		Fixed	operator/(const Fixed& name) const;
		// Operadores incremento decremento 
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);  
        //Funcion miembro que convierte el _fixed_point a float
		float toFloat( void ) const;
		//Funcion miembro que convierte el _fixed_point  a un int 
		int toInt( void ) const;
};
	/*
		
		And add the following function to the Fixed class files:
			• An overload of the insertion («) operator that inserts a floating-point representation
				of the fixed-point number into the output stream object passed as parameter

		Los operadores "<<" y ">>" en C++ son operadores de desplazamiento de bits. Se utilizan para mover 
		los bits de un número hacia la izquierda (<<) o hacia la derecha (>>). Aquí te explico cómo 
		funcionan:

			"<<": Operador de desplazamiento a la izquierda. Mueve los bits de un número hacia la 
			izquierda por un cierto número de posiciones. Esto es equivalente a multiplicar el número 
			original por 2 elevado a la potencia del número de posiciones desplazadas.

			">>": Operador de desplazamiento a la derecha. Mueve los bits de un número hacia la derecha
			 por un cierto número de posiciones. Esto es equivalente a dividir el número original
			  por 2 elevado a la potencia del número de posiciones desplazadas.
			  
		*/
	std::ostream& operator<<(std::ostream& outstream, const Fixed& name);

#endif