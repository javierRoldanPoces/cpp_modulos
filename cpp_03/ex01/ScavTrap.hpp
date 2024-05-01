/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:07:43 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 18:38:22 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

class ScavTrap: public ClapTrap
{
    private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& copy);
		//ScavTrap &operator=(ScavTrap const &copy);
		~ScavTrap();

        void guardGate();
		void attack(const std::string target);
};

#endif