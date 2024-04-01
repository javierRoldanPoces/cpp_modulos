/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:49:36 by javier            #+#    #+#             */
/*   Updated: 2024/04/01 19:51:51 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <cstring>
#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[4];
        unsigned int    index_last; // Guardamos ultima posicion que se guardo para ir reemplazando por el mas antiguo
        bool    flag;
    public:
        PhoneBook();
        ~PhoneBook();
        void    add_contact();// Controlar cual es el mas antiguo si van mas de 8 contactos
        void    display_phonebook_contact();
        void    display_all_phonebook();
};
#endif
