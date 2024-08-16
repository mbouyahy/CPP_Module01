/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 00:37:43 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/06/01 15:25:34 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = str;
    /*
        Once a reference is initialized, it cannot be changed to refer to a different 
        object because it is intended to provide a consistent and unambiguous alias 
        for a specific object. Changing the object that a reference refers to would 
        introduce confusion and potentially lead to unintended consequences in code.
    */
    
    stringPTR = &str;

    std::cout << std::endl << "The memory address of variables : " << std::endl << std::endl;
    std::cout << "The memory address of the string variable : " << &str << std::endl;
    std::cout << "The memory address held by stringPTR : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF : " << &stringREF << std::endl;
    std::cout << std::endl << "The values of variables : " << std::endl << std::endl;
    std::cout << "The value of the string variable : " << str << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " << stringREF << std::endl;
}