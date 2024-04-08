/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:43:48 by javi              #+#    #+#             */
/*   Updated: 2024/04/08 18:06:53 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WEAPON_H
# define WEAPON_H

class Weapon
{
    private:
		std::string type;
    public:
		Weapon();
		Weapon(std::string type_weapon);
		~Weapon();
		const	std::string&  getType();
		void	setType(std::string new_type);           
};

#endif