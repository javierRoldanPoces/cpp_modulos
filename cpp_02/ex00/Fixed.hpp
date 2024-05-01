/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 15:55:59 by javier            #+#    #+#             */
/*   Updated: 2024/05/01 20:15:26 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int _fixed_point;
		static const int	_fractional_bits = 8;  
	public:
		Fixed(); //Constructor
		Fixed(const Fixed& name); //Constructor de copia
		const Fixed& operator =(const Fixed& name); //Sobrecarga de operador de asignacion
		~Fixed(); //destructor
		// Funciones miembros de la clase
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
