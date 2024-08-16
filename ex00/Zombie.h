/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 19:09:03 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/21 12:06:23 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
    private:
        std::string name;

    public:
    	void    announce( void );
        void    SetName(std::string name);
        ~Zombie(void);
};

void    randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
