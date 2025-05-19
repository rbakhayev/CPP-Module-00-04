/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:26:41 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/03/29 10:26:43 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

// Costruttore di default
PhoneBook::PhoneBook() : currentSize(0), oldContactsSize(0){}

// Metodo per aggiungere un contatto
void PhoneBook::addContact(Contact newContact)
{
    if (currentSize < MAX_CONTACTS)
        contacts[currentSize++] = newContact;
    else
    {
        contacts[oldContactsSize++] = newContact;
        if (oldContactsSize == MAX_CONTACTS)
            oldContactsSize = 0;
    }
}

// Metodo per visualizzare i contatti
void PhoneBook::displayContacts()
{
    std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < currentSize; ++i)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << std::setiosflags(std::ios::right) << truncateString(contacts[i].getFirstName(), 10) << "|";
        std::cout << std::setw(10) << std::setiosflags(std::ios::right) << truncateString(contacts[i].getLastName(), 10) << "|";
        std::cout << std::setw(10) << std::setiosflags(std::ios::right) << truncateString(contacts[i].getNickname(), 10) << std::endl;
    }
}

// Metodo per ottenere un contatto
Contact PhoneBook::getContact(int index)
{
    if (index >= 0 && index < currentSize)
        return contacts[index];
    else
        return Contact();
}

// Metodo privato per troncare una stringa
std::string PhoneBook::truncateString(std::string str, int width)
{
    if (str.length() <= static_cast<std::string::size_type>(width))
        return str;
    else
        return str.substr(0, width - 1) + ".";
}
