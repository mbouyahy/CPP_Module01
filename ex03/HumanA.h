/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:30:55 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/20 19:44:06 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
    private:
        std::string name;
        Weapon  &A_Weapon;
    public:
        HumanA(std::string name, Weapon &A_Weapon);
        void    attack(void);
};

#endif