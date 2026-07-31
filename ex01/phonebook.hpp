/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 09:43:26 by cacortes          #+#    #+#             */
/*   Updated: 2026/03/04 18:06:41 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int	count;
	public:
		PhoneBook() {count = 0;}
		
    	void	add_contact(const Contact &c);
		
		void	list_data(int i);

		void	list_contacts();	
};

#endif
