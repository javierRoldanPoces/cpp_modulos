/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:43:58 by javier            #+#    #+#             */
/*   Updated: 2024/05/01 20:05:38 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("Default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_hit_points(10), _energy_points(10), _attack_damage(0)
{
	this->_name = name;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	*this = copy;
	std::cout << "Constructor copy called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& copy)
{
	if (this != &copy)
	{
		_attack_damage = copy.get_attack_damage();
		_energy_points = copy.get_energy_points();
		_hit_points = copy.get_hit_points();
		std::cout << "Operator = called." << std::endl;
	}
	else
		std::cout << "Both are the same" <<std::endl;

	return (*this);
}

void	ClapTrap::set_name(std::string name)
{
	this->_name = name;
}

void	ClapTrap::set_hit_points(unsigned int hit_point)
{
	this->_hit_points = hit_point;
}

void	ClapTrap::set_energy_points(unsigned int energy_point)
{
	this->_energy_points = energy_point;
}

void	ClapTrap::set_attack_damage(unsigned int damage)
{
	this->_attack_damage = damage;
}

std::string	ClapTrap::get_name(void) const
{
	return this->_name;
}

unsigned int	ClapTrap::get_hit_points(void) const
{
	return this->_hit_points;
}

unsigned int	ClapTrap::get_energy_points(void) const
{
	return this->_energy_points;
}

unsigned int	ClapTrap::get_attack_damage(void) const
{
	return this->_attack_damage;
}


void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points--;
		std::cout << "ClapTrap " <<  _name  << " attacks " << target << ". causing "
		<< _attack_damage << " points of damage" << std::endl;
	}
	else
		std::cout << "Claptrap " <<  _name <<" can't attack, he has not energy points." 
		<< std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points > 0)
	{
		if (_hit_points > amount)
			_hit_points-=amount;
		else
			_hit_points = 0;
		std::cout << "ClapTrap " << _name << " has taken " << amount << " of damage "
		<<  _name  << " has " <<  _hit_points << " hit_points" << std::endl;
	}
	else
		std::cout << "ClapTrap" << _name << " is dead." <<std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_energy_points--;
		_hit_points+=amount;
		std::cout << "ClapTrap " << _name << " has been repaired. He has "
		<< _hit_points << " hit_points" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can not be repaired." << std::endl;
}
