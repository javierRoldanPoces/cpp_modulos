/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:24:33 by javi              #+#    #+#             */
/*   Updated: 2024/04/04 19:46:56 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_A, Weapon& type_weapon)
    : name_a(name_A), weapon_type(type_weapon)
{
}

HumanA::~HumanA()
{
}