/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:15:37 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 18:42:33 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void) {
    ScavTrap Scav1("juan");
    ScavTrap Scav2("Javier");
	std::cout << Scav1.get_name() << std::endl;
    std::cout << Scav1.get_name()  << " has "<< Scav1.get_energy_points() << " energy points" <<  std::endl;
    Scav1.guardGate();
    for (int i = 1;i <= 50;i++)
    {
        Scav1.attack("Niebla");
        std::cout << i << std::endl;
    }
    Scav1.beRepaired(10);
}
