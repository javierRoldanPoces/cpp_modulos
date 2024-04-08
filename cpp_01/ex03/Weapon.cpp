/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:06:49 by javi              #+#    #+#             */
/*   Updated: 2024/04/08 18:49:27 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string type_weapon)
{
    this->type = type_weapon;
}
Weapon::~Weapon()
{
    std::cout << "Weapon " << this->type << " has been destroyed" << std::endl;
}

const	std::string&  Weapon::getType()
{
    return(this->type);
}

void	Weapon::setType(std::string new_type)
{
    this->type = new_type;
}