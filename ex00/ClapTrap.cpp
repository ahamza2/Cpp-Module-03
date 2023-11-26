/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:22:58 by haarab            #+#    #+#             */
/*   Updated: 2023/11/23 15:55:49 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "default constractor" << std::endl;
    Name = "Default";
    Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
};

ClapTrap::ClapTrap(std::string name) : Name(name) {
	std::cout << "ClapTrap " << Name << " is born!" << std::endl;
    Hit_points = 10;
	Energy_points = 10;
	Attack_damage = 0;
};

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << Name << " is destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    *this = other;
    std::cout << "ClapTrap " << Name << " copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & other)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != & other)
	{
		this->Name = other.Name;
    	this->Hit_points = other.Hit_points;
    	this->Energy_points = other.Energy_points;
    	this->Attack_damage = other.Attack_damage;
	}
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0) {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
    }
	else
	{
        std::cout << "ClapTrap " << Name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (Hit_points > 0) {
        std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
        Hit_points -= amount;
    }
	else
	{
        std::cout << "ClapTrap " << Name << " can't take any more damage. It's already destroyed." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (Hit_points > 0 && Energy_points > 0) {
        std::cout << "ClapTrap " << Name << " is repaired for " << amount << " points!" << std::endl;
        Hit_points += amount;
        Energy_points--;
    }
	else
	{
        std::cout << "ClapTrap " << Name << " can't be repaired. Not enough hit points or energy points." << std::endl;
    }
}