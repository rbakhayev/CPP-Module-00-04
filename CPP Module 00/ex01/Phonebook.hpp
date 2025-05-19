/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:26:48 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/03/29 10:26:49 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook
{
    private:
            static const int MAX_CONTACTS = 8;
            Contact contacts[MAX_CONTACTS];
            int currentSize;
            int oldContactsSize;
    public:
            PhoneBook();

            void addContact(Contact newContact);
            void displayContacts();
            Contact getContact(int index);

    private:
            std::string truncateString(std::string str, int width);
};

#endif
