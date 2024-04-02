/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:38 by javier            #+#    #+#             */
/*   Updated: 2024/04/02 20:19:47 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index_last = 0;
	this->flag = false;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact()
{
	if (index_last < 8)
	{
		this->contact[this->index_last].add_contact();
		this->contact[this->index_last].index = this->index_last;
		this->index_last++;        
	}
	else
	{
		this->contact[0].add_contact();
		this->contact[0].index = 0;
		this->index_last = 1;
		this->flag = true;
	}
}
void	PhoneBook::display_phonebook_contact()
{
	std::string	str;
	unsigned int	index_search;

	if (this->flag == true || this->index_last > 0)
	{
		display_all_phonebook();
		std::cout << "Insert contact index: ";
		std::getline(std::cin, str);
		index_search = atoi(str.c_str());
		if (this->flag == true)
		{
			if (index_search <= 8 && index_search > 0)
				this->contact[index_search - 1].display_contact();
			else
				std::cout << "Contact not available" <<std:: endl;
		}
		else
		{
			if (index_search <= index_last && index_search > 0)
				this->contact[index_search - 1].display_contact();
			else
				std::cout << "Contact not available" <<std:: endl;	
		}
	}
	else
		std::cout << "Empty PhoneBook" << std::endl;
	
}

void	PhoneBook::display_all_phonebook()
{
	std::cout << RED << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname";
	std::cout << "|" << std::endl << RESET;
	if (this->flag == true)
	{
		for (unsigned int i = 0; i < 8; i++)
			this->contact[i].display_table();	
	}
	else
	{
		for (unsigned int i = 0; i < this->index_last; i++)
			this->contact[i].display_table();
	}
		
}
