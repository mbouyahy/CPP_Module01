/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:31:01 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/20 19:45:53 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
    private:
        std::string name;
        Weapon  *B_Weapon;
    public:
        HumanB(std::string name);
        void    setWeapon(Weapon  &B_Weapon);
        void    attack(void);
};

#endif