/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:50:55 by javier            #+#    #+#             */
/*   Updated: 2024/04/01 18:45:00 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
    std::string cmd;
    PhoneBook   phonebook;
    
    while(1)
    {
        std::cout <<"Options: (ADD, SEARCH, EXIT) -> ";
        std::getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
            phonebook.add_contact();
        else if (!cmd.compare("SEARCH"))
            phonebook.display_phonebook_contact();
        else if (!cmd.compare("EXIT"))
        {
            std::cout << "Finish" << std::endl;
            return (0);
        }
        else
            std::cout << "The command " + cmd + " not exist" <<std::endl;
    }
}