/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:00:37 by javier            #+#    #+#             */
/*   Updated: 2024/04/03 19:38:09 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie();
        Zombie(std::string strname);
        ~Zombie();
        void announce(void);
};

Zombie* newZombie(std::string strname);
void    randomChump(std::string strname);

#endif