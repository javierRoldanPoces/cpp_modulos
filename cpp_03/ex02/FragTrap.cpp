/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:20:35 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 19:44:55 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 //#include <iostream>
 #include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout << "FragTrap constructor called." << std::endl;
    this->set_hit_points(100);
    this->set_energy_points(100);
    this->set_attack_damage(30);
}

FragTrap &FragTrap::operator=(FragTrap const &copy)
{
	if (this != &copy)
	{
		_hit_points = copy.get_hit_points();
		_energy_points = copy.get_energy_points();
		_attack_damage = copy.get_attack_damage();
		std::cout << "Assignament operator  FragTrap called." << std::endl;	
	}

	return (*this);
}

FragTrap::FragTrap(FragTrap const& copy): ClapTrap(copy)
{
	std::cout << "FragTrap " << this->_name << " Copy Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::guardGate()
{
	std::cout << "FragTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->get_name() << " Hey, give me some high fives, guys!" << std::endl;
	
}

void FragTrap::attack(const std::string target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points--;
		std::cout << "FragTrap " <<  _name  << " attacks " << target << ". causing "
		<< _attack_damage << " points of damage" << std::endl;
	}
	else
		std::cout << "FragTrap " <<  _name <<" can't attack, he has not energy points." 
        << std::endl;
}