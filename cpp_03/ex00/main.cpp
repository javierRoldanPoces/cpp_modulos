/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:15:37 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 13:36:41 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Clap_0, Clap_1("Javi"), Clap2("Juan");

	
	Clap_1.attack("Juan");
	Clap_1.attack("Juan");
	Clap_1.takeDamage(10);
	Clap_1.attack("Juan");
	Clap2.beRepaired(10);
	Clap2.attack("Javi");

	return 0;
}
