/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:15:37 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 20:09:37 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main (void) {
    FragTrap Scav1("juan");
    FragTrap Scav2("Javier");
    std::cout << Scav1.get_name() << std::endl;
    std::cout << Scav1.get_name()  << " has "<< Scav1.get_energy_points() << " energy points" <<  std::endl;
    Scav1.guardGate();
    Scav1.attack("Niebla");
    std::cout << "Hit points of " << Scav1.get_name() <<  " " << Scav1.get_energy_points() << std::endl;
    Scav1 = Scav2;
    std::cout << "Hit points of " << Scav1.get_name() << " "  << Scav1.get_energy_points() << std::endl;
    Scav1.highFivesGuys();
    Scav1.beRepaired(10);
}
