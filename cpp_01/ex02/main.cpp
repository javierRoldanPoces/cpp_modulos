/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:12:29 by javi              #+#    #+#             */
/*   Updated: 2024/04/04 18:40:04 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable is " << &str << std::endl;
	std::cout << "The memory address held by stringPTR is " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF is " << &stringREF << std::endl;

	std::cout << "\nThe value of the string variable is " << str << std::endl;
	std::cout << "The value pointed to by stringPTR is " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF is " << stringREF << std::endl;
}
