/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:36 by javier            #+#    #+#             */
/*   Updated: 2024/04/02 20:20:06 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define RED "\x1B[31m"
# define RESET "\x1b[0m"
#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact         contact[8];
        unsigned int    index_last;
        bool            flag;
    public:
        PhoneBook();
        ~PhoneBook();
        void    add_contact();
        void    display_phonebook_contact();
        void    display_all_phonebook();
};
#endif
