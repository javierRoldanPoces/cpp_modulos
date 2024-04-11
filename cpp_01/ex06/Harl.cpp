/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:33:02 by javier            #+#    #+#             */
/*   Updated: 2024/04/11 19:39:51 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{
    
}

void	Harl::debug(void)
{
   	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
	<< "I really do!.\n" << std::endl;
}

void	Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \n"
    << "enough bacon in my burger! If you did, I wouldn’t be asking for more!.\n" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for \n"
	<< "years whereas you started working here since last month.\n" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
    int i;
	for(i = 0; i < 4; i++)
	{
		if(level.compare(levels[i]) == 0)
            break;
	}
    switch (i)
    {
    case 0:
        this->debug(); this->info(); this->warning(); this->error();
        break;
    
    case 1:
        this->info(); this->warning(); this->error();
        break;
    case 2:
       this->warning(); this->error();
       break;
    case 3:
        this->error();
        break;
    default:
        std::cout << "Invalid Arguments" << std::endl;
        break;
    }
}
