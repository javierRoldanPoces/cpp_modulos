/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:20:35 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 19:41:30 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include "ClapTrap.hpp"
 #include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout << "ScavTrap constructor called." << std::endl;
    this->set_hit_points(100);
    this->set_energy_points(50);
    this->set_attack_damage(20);
}

ScavTrap::ScavTrap(ScavTrap const& copy):ClapTrap(copy)
{
	std::cout << "ScavTrap " << this->_name << " Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &copy)
{
	if (this != &copy)
	{
		_hit_points = copy.get_hit_points();
		_energy_points = copy.get_energy_points();
		_attack_damage = copy.get_attack_damage();
		//std::cout << "Assignament operator called." << std::endl;	
	}

	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points--;
		std::cout << "ScavTrap " <<  _name  << " attacks " << target << ". causing "
		<< _attack_damage << " points of damage" << std::endl;
	}
	else
		std::cout << "ScavTrap " <<  _name <<" can't attack, he has not energy points." 
        << std::endl;
}