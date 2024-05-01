/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:15:37 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 19:59:02 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main (void) {
    ScavTrap Scav1("juan");
    ScavTrap Scav2("Javier");
	std::cout << Scav1.get_name() << std::endl;
    std::cout << Scav1.get_name()  << " has "<< Scav1.get_energy_points() << " energy points" <<  std::endl;
    Scav1.guardGate();
    for (int i = 1;i <= 50;i++)
    {
        Scav1.attack(Scav2.get_name());
        std::cout << i << std::endl;
    }
    Scav1.beRepaired(10);
    Scav1 = Scav2;
}
