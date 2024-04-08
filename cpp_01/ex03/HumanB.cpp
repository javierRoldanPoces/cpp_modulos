/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:23:36 by javi              #+#    #+#             */
/*   Updated: 2024/04/08 19:06:44 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name_B)
{
    this->name_b = name_B;
    this->weapon_type = NULL;
}

HumanB::~HumanB()
{
    std::cout << "HumanB " << this->name_b << " has been destroyed" << std::endl;

}

void   HumanB::setWeapon(Weapon &weapon_type)
{
    this->weapon_type = &weapon_type;
}

void    HumanB::attack()
{
    if (this->weapon_type == NULL)
        std::cout << this->name_b << " attacks without weapons" << std::endl;
    else
        std::cout << this->name_b << " attacks with their " << this->weapon_type->getType() << std::endl; 
}
