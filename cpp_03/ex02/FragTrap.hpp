/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi <javi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:07:43 by javi              #+#    #+#             */
/*   Updated: 2024/05/01 19:44:42 by javi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap: public ClapTrap
{
    private:

	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap &operator=(FragTrap const &copy);
		FragTrap(FragTrap const& copy);
		~FragTrap();

		void guardGate();
		void highFivesGuys(void);
		void attack(const std::string target);
};

#endif