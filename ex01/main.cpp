/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 11:30:58 by cacortes          #+#    #+#             */
/*   Updated: 2026/03/03 20:57:26 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp" 

#include <iostream>
#include <cstdlib>

std::string	get_data(std::string msg)
{
	std::string data;
			
	std::cout << msg;
	while (true)
	{
		if (!std::getline(std::cin, data))
		{
			std::cout << "\nEOF detected. Exiting...\n";
			std::exit(0);
		}
		if(!data.empty())
			break;
		std::cout << "Not empty data allowed. Try again: ";
	}
	return data;
}

int	main(int argc, char **argv)
{
	Contact c;
	PhoneBook p;

	if (argc <= 1 && argv != NULL)
	{
		std::string option;
		std::cout << "\n=== / YOUR AWESOME PHONEBOOK / === \n" << std::endl;
		std::cout << " ___________________________________________________________________" << std::endl;
		std::cout << "|___________________________ USER MANUAL ___________________________|" << std::endl;
		std::cout << "| Please type:                                                      |" << std::endl;
		std::cout << "| ADD: to add a new contact.                                        |" << std::endl;
		std::cout << "| SEARCH: to view saved contacts and display a specific contact.    |" << std::endl; 
		std::cout << "| EXIT: to close your PhoneBook (all your contacts will be deleted).|" << std::endl;
		std::cout << "|___________________________________________________________________|" << std::endl;
		
		while(true)
		{
			option = get_data("\nEnter the desired option in uppercase: ");
			if (option == "ADD")
			{
				c.add_data();
				p.add_contact(c);
			}
			else if (option == "SEARCH")
				p.list_contacts();
			else if (option == "EXIT")
			{
				std::cout << "Exiting... Have a nice day :D." << std::endl;
				break;
			}
			else
				std::cout << "\nOption not allowed. Please try again" << std::endl;
		}
	}
	return 0;
}
