/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:23:17 by javi              #+#    #+#             */
/*   Updated: 2024/04/08 18:36:27 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANB_H
# define HUMANB_H

class HumanB
{
private:
    std::string name_b;
    Weapon      *weapon_type;
    
public:
    HumanB(std::string name_B);
    ~HumanB();
    void   setWeapon(Weapon &weapon_type);
    void    attack();
};

#endif