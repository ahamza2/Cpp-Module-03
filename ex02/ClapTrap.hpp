/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:22:55 by haarab            #+#    #+#             */
/*   Updated: 2023/11/23 16:02:59 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		int  Hit_points;
		int  Energy_points;
		int  Attack_damage;
	
	public:
		ClapTrap();
		ClapTrap(std::string name);
		 ~ClapTrap();

		ClapTrap(const ClapTrap & claptrap);
		ClapTrap &operator=(const ClapTrap& other);
		
		virtual void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};


#endif