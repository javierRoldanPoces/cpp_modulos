/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:00:05 by javier            #+#    #+#             */
/*   Updated: 2024/04/03 19:39:25 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie* newZombie( std::string name );
It creates a zombie, name it, and return it so you can use it outside of the function
scope.
*/
Zombie* newZombie(std::string strname)
{
    Zombie *new_zombie = new Zombie(strname);
    return(new_zombie);
}
