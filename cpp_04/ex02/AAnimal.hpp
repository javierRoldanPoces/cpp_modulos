/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:35:59 by javier            #+#    #+#             */
/*   Updated: 2024/05/23 19:40:30 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iomanip>
#include <iostream>

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(std::string type);
		AAnimal(AAnimal const &copy);
		AAnimal &operator=(AAnimal const &copy);
		std::string getType(void) const;
		void setType(std::string type_value);

		virtual ~AAnimal();
		virtual void	makeSound() const = 0;
};

#endif