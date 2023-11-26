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

int main ()
{
	ClapTrap claptrap1;
    ClapTrap claptrap2("hamza");
    ClapTrap claptrap3(claptrap2);
    ClapTrap claptrap4("aarab");

    claptrap1.attack("hamza");
    claptrap2.takeDamage(4);
    claptrap2.beRepaired(10);

    claptrap2.attack("aarab");
    claptrap4.takeDamage(5);
    claptrap4.beRepaired(3);
    claptrap4.takeDamage(7);
    claptrap4.beRepaired(6);

    return 0;
}