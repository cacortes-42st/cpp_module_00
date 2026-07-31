/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 22:44:28 by cacortes          #+#    #+#             */
/*   Updated: 2026/03/04 20:56:11 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

std::string get_data(std::string msg);

std::string Contact::get_first_name() const 
{
	if (first_name.length() > 10)
		return first_name.substr(0, 9) + ".";
	return first_name;
}

std::string Contact::get_last_name() const 
{
	if (last_name.length() > 10)
		return last_name.substr(0, 9) + ".";
	return last_name;
}

std::string Contact::get_nickname() const 
{
	if (nickname.length() > 10)
		return nickname.substr(0, 9) + ".";
	return nickname;
}

std::string Contact::get_phone_number() const
{
    return phone_number;
}

std::string Contact::get_darkest_secret() const
{
    return darkest_secret;
}

void	Contact::add_data()
{
	std::cout << "\n Contact aggregator" << std::endl;
	std::cout << "====================" << std::endl;
	
	first_name = get_data("Enter your contact's first name: ");
	last_name = get_data("Enter your contact's last name: ");
	nickname = get_data("Enter your contact's nickname: ");
	phone_number = get_data("Enter your contact's phone number: ");
	darkest_secret = get_data("Enter your contact's darkest secret: ");

	std::cout << "\nContact added successfully!!!!\n" << std::endl;
}