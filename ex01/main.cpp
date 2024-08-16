/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:14:53 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/21 12:56:24 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int main(void)
{
    Zombie *z;
    z = zombieHorde(4, "Mbouyahy");
    for (int i = 0; i < 4; i++)
    {
        z[i].announce();
    }
    delete[] z;
}
