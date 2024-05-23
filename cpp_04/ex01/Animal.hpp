/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:35:59 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 18:46:10 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iomanip>
#include <iostream>

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &copy);
		Animal &operator=(Animal const &copy);
		std::string getType(void) const;
		void setType(std::string type_value);

		virtual ~Animal();
		virtual void	makeSound() const;
};

#endif