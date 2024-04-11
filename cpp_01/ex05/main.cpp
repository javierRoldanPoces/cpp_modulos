/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:56:41 by javier            #+#    #+#             */
/*   Updated: 2024/04/11 12:27:39 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Harl.hpp"

int main()
{
    Harl	harl;
    std::string buffer;
    
    std::cout << "Enter level: " << std::endl;
    std::cin >> buffer;
	if (buffer == "DEBUG" || buffer == "INFO" || buffer == "WARNING" || buffer == "ERROR")
    	harl.complain(buffer);
	else
		std::cout << "This complain does not exist" << std::endl;
	return 0;
}