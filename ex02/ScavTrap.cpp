#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap default is born!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
    std::cout << "ScavTrap " << name << " is born!!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << Name << " is destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap " << Name << " copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & other)
{
	std::cout << "ScapTrap assignation operator called" << std::endl;
	if (this != & other)
	{
		this->Name = other.Name;
    	this->Hit_points = other.Hit_points;
    	this->Energy_points = other.Energy_points;
    	this->Attack_damage = other.Attack_damage;
	}
    return *this;
}


void ScavTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0) {
        std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
    }
	else
	{
        std::cout << "ScavTrap " << Name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gatekeeper mode. Guarding the gate!" << std::endl;
}