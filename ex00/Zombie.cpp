/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:09:44 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/21 12:08:11 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void    Zombie::announce()
{
    std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << name << " Zombie Destructor" << std::endl;
}

void    Zombie::SetName(std::string name)
{
    this->name = name;
}
