#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout << "FragTrap default is born!!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
    std::cout << "FragTrap " << Name << " is born!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << Name << " is destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "FragTrap " << Name << " copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap & other)
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

void FragTrap::attack(const std::string& target)
{
    if (Hit_points > 0 && Energy_points > 0) {
        std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
        Energy_points--;
    }
	else
	{
        std::cout << "FragTrap " << Name << " can't attack. Not enough hit points or energy points." << std::endl;
    }
}


void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << Name << " requests a high five! Up for it, guys?" << std::endl;
}