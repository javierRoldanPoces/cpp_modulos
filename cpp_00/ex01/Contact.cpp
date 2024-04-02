/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:33 by javier            #+#    #+#             */
/*   Updated: 2024/04/02 20:17:32 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->index = 0;
}

Contact::~Contact()
{
}

int Contact::add_contact()
{
    std::string f_name;
    std::string l_name;
    std::string n_name;
    std::string p_number;
    std::string d_secret;

    do
    {
        std::cout << "Insert fist name: ";
        std::getline(std::cin, f_name);
    } while (f_name.empty());
    do
    {
        std::cout << "Insert last name: ";
        std::getline(std::cin, l_name);
    } while (l_name.empty());
    do
    {
        std::cout << "Insert nickname: ";
        std::getline(std::cin, n_name);
    } while (n_name.empty());
    do
    {
        std::cout << "Insert phone number: ";
        std::getline(std::cin, p_number);
    } while (p_number.empty());
    do
    {
        std::cout  << "Insert darkset secret: ";
        std::getline(std::cin, d_secret);
    } while (d_secret.empty());
    
    this->first_name = f_name;
    this->last_name = l_name;
    this->nick_name = n_name;
    this->phone_number = p_number;
    this->darkest_secret = d_secret;
    return 1;
}

void	Contact::display_contact()
{
    std::cout << RED << "Fist name: " << RESET << this->first_name << std::endl;
    std::cout << RED << "Last name: " << RESET << this->last_name << std::endl;
    std::cout << RED << "Nickname: " << RESET <<  this->nick_name << std::endl;
    std::cout << RED << "Phone Number: " << RESET << this->phone_number << std::endl;
    std::cout << RED << "Darkest secret: " << RESET << this->darkest_secret << std::endl;
}

void	Contact::display_table()
{
	std::cout << "|" << std::setw(10) << this->index + 1;
	if (this->first_name.length() > 10)
		std::cout << "|" << this->first_name.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->first_name;
	if (this->last_name.length() > 10)
		std::cout << "|" << this->last_name.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->last_name;
	if (this->nick_name.length() > 10)
		std::cout << "|" << this->nick_name.substr(0, 9) << ".";
	else
		std::cout << "|" << std::setw(10) << this->nick_name;
	std::cout << std::endl;		
}
