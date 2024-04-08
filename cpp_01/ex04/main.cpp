/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:40:10 by javi              #+#    #+#             */
/*   Updated: 2024/04/08 20:34:44 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

/*
std::string::npos` es una constante estática especial definida por la biblioteca de
cadenas de C++. Es del tipo `size_t` y su valor es el máximo posible que puede tener
un `size_t`. Esto significa que es un número extremadamente grande, generalmente 
representado por -1 si se convierte a un entero con signo.

Se utiliza en las operaciones de la biblioteca de cadenas para indicar una posición 
que está fuera del rango válido de un índice en una cadena. En otras palabras,
std::string::npos se utiliza para indicar que una operación de búsqueda 
 en una cadena no ha encontrado lo que estaba buscando.
*/
void	replaceS1S2(std::string	&line, const std::string &s1, const std::string &s2) 
{
	size_t	i;
	i = 0;
	while((i = line.find(s1, i)) != std::string::npos)
	{
		line = line.substr(0, i) + s2 + line.substr(i + s1.length());
		i += s2.length();
	}
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Execute ./Sed <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inputFile(filename.c_str());
	std::ofstream outputFile((filename + ".replace").c_str());
	std::string	line;
	
	if(!inputFile)
	{
		std::cout << "Error to open input file" << std::endl;
		return 1;
	}
	if (!outputFile)
	{
		std::cout << "Error to create output file" << std::endl;
		return 1;
	}
	while (std::getline(inputFile, line))
	{
		replaceS1S2(line, s1, s2); 
		outputFile << line << std::endl;
	}
	inputFile.close();
	outputFile.close();
}
