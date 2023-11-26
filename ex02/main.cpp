/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haarab <haarab@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:22:52 by haarab            #+#    #+#             */
/*   Updated: 2023/11/19 21:41:39 by haarab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
    ClapTrap claptrap("CL4P-TP");
    claptrap.attack("Bandit");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);

    ScavTrap scavtrap("SC4V-TP");
    scavtrap.guardGate();
    scavtrap.attack("Skag");
    scavtrap.takeDamage(15);
    scavtrap.beRepaired(5);

    FragTrap fragtrap("FR4G-TP");
    fragtrap.attack("Boss");
    fragtrap.takeDamage(25);
    fragtrap.beRepaired(10);
    fragtrap.highFivesGuys();

	// {ScavTrap scav("hamza");
    // ScavTrap scav2("aarab");
    // ScavTrap scaav = scav;
    // scav.attack("aarab");
    // scav2.takeDamage(500);
    // scav2.beRepaired(10);
    // scav2.guardGate();}

    return 0;
}