/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:30:58 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/20 19:45:08 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &A_Weapon) : A_Weapon(A_Weapon)
{
    this->name = name;
}
void    HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << A_Weapon.getType() << std::endl;
}