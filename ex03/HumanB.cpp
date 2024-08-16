/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:30:51 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/20 19:47:57 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

void    HumanB::attack(void)
{
    if (B_Weapon)
        std::cout << this->name << " attacks with their " << B_Weapon->getType() << std::endl;
}
HumanB::HumanB(std::string name)
{
    
    this->name = name;
    this->B_Weapon = NULL;
}
void    HumanB::setWeapon(Weapon  &B_Weapon)
{
    this->B_Weapon = &B_Weapon;
}
