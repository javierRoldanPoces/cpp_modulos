/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javier <javier@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:32:38 by javier            #+#    #+#             */
/*   Updated: 2024/04/11 19:41:50 by javier           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iomanip>
#include <string>

int	main(int argc, char **argv)
{
	Harl harl;
	std::string buffer;

	if (argc != 2)
	{
		std::cout << "invalid number of arguments." << std::endl; 
		return 1;
	}
	buffer.assign(argv[1]);
	harl.complain(buffer);
	return 0;
}