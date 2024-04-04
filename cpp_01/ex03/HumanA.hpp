/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:24:25 by javi              #+#    #+#             */
/*   Updated: 2024/04/04 19:44:54 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_H
# define HUMANA_H

class HumanA
{
private:
    std::string name_a;
    Weapon      &weapon_type;
    
public:
    HumanA(std::string name_A, Weapon& type_weapon);
    ~HumanA();
    void    attack();
};

#endif