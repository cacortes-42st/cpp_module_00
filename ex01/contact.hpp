/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 22:41:28 by cacortes          #+#    #+#             */
/*   Updated: 2026/03/04 20:56:32 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		
	    std::string get_first_name() const;
	    std::string get_last_name() const; 
	    std::string get_nickname() const;
    	std::string get_phone_number() const;
    	std::string get_darkest_secret() const;

		void	add_data();
};

#endif