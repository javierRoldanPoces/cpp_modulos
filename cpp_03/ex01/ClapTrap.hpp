/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:28:03 by javier            #+#    #+#             */
/*   Updated: 2024/05/01 19:57:38 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

class ClapTrap
{
	protected:
		std::string 	_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &name);
		ClapTrap &operator=(ClapTrap const &copy);
		ClapTrap(ClapTrap const &copy);
		~ClapTrap();

		void			set_name(std::string name);
		void			set_hit_points(unsigned int hit_point);
		void			set_energy_points(unsigned int energy_point);
		void			set_attack_damage(unsigned int damage);
		std::string		get_name(void) const;
		unsigned int	get_hit_points(void) const;
		unsigned int	get_energy_points(void) const;
		unsigned int	get_attack_damage(void) const;

		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
