/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:00:37 by javier            #+#    #+#             */
/*   Updated: 2024/04/03 20:53:49 by javi             ###   ########.fr       */
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
        ~Zombie();
        void	set_name(std::string name);
        void	announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif