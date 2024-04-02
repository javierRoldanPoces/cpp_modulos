/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:29 by javier            #+#    #+#             */
/*   Updated: 2024/04/02 20:14:45 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# define RED "\x1B[31m"
# define RESET "\x1b[0m"
#include <cstring>
#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string phone_number;
		std::string	darkest_secret;
	public:
		int	index;
		//Constructor
		Contact();
		//Destructor
		~Contact();
		int		add_contact();
		void	display_contact();
		void	display_table();
};

#endif