/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:23:51 by cacortes          #+#    #+#             */
/*   Updated: 2026/03/03 20:57:09 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

#include <iostream>
#include <iomanip>
#include <sstream>

std::string get_data(std::string msg);

void	PhoneBook::add_contact(const Contact &c)
{
	contacts[count % 8] = c;
	count++;
}

void	PhoneBook::list_data(int i)
{
	std::cout << "\n==[ CONTACT #" << i + 1 << " DATA ]==" << std::endl;
	std::cout << "First name: " << contacts[i].get_first_name() << std::endl;
	std::cout << "Last name: " << contacts[i].get_last_name() << std::endl;
	std::cout << "Nickname: " << contacts[i].get_nickname() << std::endl;
	std::cout << "Phone number: " << contacts[i].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contacts[i].get_darkest_secret() << std::endl;
}

void	PhoneBook::list_contacts()
{
	int display_count;
	int option;

	std::cout << "\n   Contact list" << std::endl;
	std::cout << "==================" << std::endl;	
	if (count < 8)
		display_count = count;
	else
		display_count = 8;
	std::cout << "\n|  INDEX   |FIRST_NAME|LAST_NAME | NICKNAME |" << std::endl;
	std::cout << " ___________________________________________" << std::endl;
	for (int i = 0; i < display_count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1 << "|" << std::setw(10);
		std::cout << contacts[i].get_first_name() << "|" << std::setw(10);
		std::cout << contacts[i].get_last_name() << "|" << std::setw(10);
		std::cout << contacts[i].get_nickname() << "|" << std::endl;
	}
	if (count > 0)
	{
		while(true)
		{
			std::string input = get_data("\nEnter the contact index you want to display: ");
			std::stringstream dough(input);
			dough >> option;
			if (option > 0 && option <= display_count && !dough.fail() && dough.eof())
			{
				list_data(option -1);
				break;
			}
			std::cout << "The index especified is out of range. Try again.\n" << std::endl;
		}
	}
	else
		std::cout << "No contacts have been added yet." << std::endl;
}	