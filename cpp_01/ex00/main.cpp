/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:59:59 by javier            #+#    #+#             */
/*   Updated: 2024/04/03 19:44:00 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string str;

    std::cout << "Enter a new name to create a new zombie on stack: " << std::endl;
    std::getline(std::cin, str);
    Zombie stackZombie(str);
    stackZombie.announce();

    std::cout << "Enter a new name to create a random chump on stack: " << std::endl;
    std::getline(std::cin, str);
    randomChump(str);
    
    std::cout << "Enter a new name to create a new zombie on the heap: " << std::endl;
    std::getline(std::cin, str);
    Zombie  *heap_zombie = newZombie(str);
    heap_zombie->announce();
    delete(heap_zombie);
    return(0);
}