/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:10:04 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/21 12:56:49 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie( std::string name )
{
    Zombie *z = new Zombie;

    //we don't have access to name variable because he is private so we use the encapsulation
    z->SetName(name);
    z->announce();
    return (z);
}