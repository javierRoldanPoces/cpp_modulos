/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:59:59 by javier            #+#    #+#             */
/*   Updated: 2024/04/03 20:51:10 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "Zombie.hpp"

int main(void)
{
    std::string name;
    int N;
    std::string size_horde;

    std::cout << "Enter a new name to create a horde of Zombies: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Enter size oh horde: " << std::endl;
    std::getline(std::cin, size_horde);
    N = std::atoi(size_horde.c_str());
    Zombie *horde = zombieHorde(N, name);
    for (int i = 0; i < N; i++)
        horde[i].announce();
    delete[] (horde);
    return(0);
}
