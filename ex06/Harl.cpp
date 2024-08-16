/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 19:49:20 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/21 12:55:06 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "Debug messages contain contextual information. They are mostly used for problem diagnosis" << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "These messages contain extensive information. They are helpful for tracing program execution in a production environment" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I've been coming for years whereas you started working here since last month" << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*arr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         index;
    Harl        H;

    index = 0;
    while (index < 4)
    {
        if (level == levels[index])
            break ;
        index++;
    }
    switch (index)
    {
        case 0:
            (H.*arr[0])();
        case 1:
            (H.*arr[1])();
        case 2:
            (H.*arr[2])();
        case 3:
            (H.*arr[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
            break;
    }
}
