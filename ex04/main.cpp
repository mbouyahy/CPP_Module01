/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbouyahy <mbouyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 17:11:36 by mbouyahy          #+#    #+#             */
/*   Updated: 2023/09/21 12:58:51 by mbouyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int main(int ac, const char **av)
{
    if (ac == 4)
	{
		//Declare and define variables :
		std::string	filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		std::string content;
		std::string stock = "";
		size_t		b_index;

		std::ifstream File_1(filename);//Reads from files
		std::ofstream File_2(filename + ".replace");//Creates and writes to files
		if (!File_1 || !File_2)
		{
			std::cout << "Create file fails!" << std::endl;
			return (1);
		}
		while (std::getline(File_1, content, '\0'))//if std::getline(File_1, content, '\0') return -1 the loop will be stoped
		{
			while ((b_index = content.find(s1)) < content.size())//if b_index > content.size() the loop will be stoped
			{
				b_index = content.find(s1);//find the start position of s1
				content.erase(b_index, s1.size());//remove s1 from content
				content.insert(b_index, s2);//insert s2 in the position of s1 (from b_index)
			}
			stock += content;
		}
		File_2 << stock;//write in File_2
		File_1.close();
		File_2.close();
	}
	else
		std::cout << "Errrrrror!" << std::endl;//print Error msg
}