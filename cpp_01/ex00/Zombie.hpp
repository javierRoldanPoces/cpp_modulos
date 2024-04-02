/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:00:37 by javier            #+#    #+#             */
/*   Updated: 2024/04/02 23:38:44 by javier           ###   ########.fr       */
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
        Zombie(std::string sname);
        ~Zombie();
        void announce(void);
};

//Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif