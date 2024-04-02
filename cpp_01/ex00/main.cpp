/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:59:59 by javier            #+#    #+#             */
/*   Updated: 2024/04/02 23:34:05 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string str;

    std::cout << "Introduce nombre para crear nuevo zombie en stack: " << std::endl;
    std::getline(std::cin, str);
    Zombie stackZombie(str);
    stackZombie.announce();
}