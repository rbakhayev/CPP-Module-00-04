/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:26:21 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/03/29 10:26:23 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
    PhoneBook phoneBook;

    while (true) 
    {
        std::string command;
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD")
        {
            Contact newContact;
            std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

            std::cout << "Enter first name: ";
            std::cin >> firstName;
            newContact.setFirstName(firstName);

            std::cout << "Enter last name: ";
            std::cin >> lastName;
            newContact.setLastName(lastName);

            std::cout << "Enter nickname: ";
            std::cin >> nickname;
            newContact.setNickname(nickname);

            std::cout << "Enter phone number: ";
            std::cin >> phoneNumber;
            newContact.setPhoneNumber(phoneNumber);

            std::cout << "Enter darkest secret: ";
            std::cin >> darkestSecret;
            newContact.setDarkestSecret(darkestSecret);

            phoneBook.addContact(newContact);
        } 
        else if (command == "SEARCH")
        {
            phoneBook.displayContacts();
            std::string searchIndex;
            std::cout << "Enter index of contact to display: ";
            std::cin >> searchIndex;

            bool isValidIndex = true;
            for (size_t i = 0; i < searchIndex.length(); ++i)
            {
                if (!isdigit(searchIndex[i]))
                {
                    isValidIndex = false;
                    break;
                }
            }
            if (isValidIndex == true)
            {
                std::stringstream ss(searchIndex);
                int index;
                ss >> index;
                Contact foundContact = phoneBook.getContact(index);
                if (foundContact.getFirstName() != "")
                {
                    std::cout << "First Name: " << foundContact.getFirstName() << std::endl;
                    std::cout << "Last Name: " << foundContact.getLastName() << std::endl;
                    std::cout << "Nickname: " << foundContact.getNickname() << std::endl;
                    std::cout << "Phone Number: " << foundContact.getPhoneNumber() << std::endl;
                    std::cout << "Darkest Secret: " << foundContact.getDarkestSecret() << std::endl;
                } 
                else 
                    std::cout << "Invalid index." << std::endl;
            }
            else
                std::cout << "Invalid input. Please enter a valid integer index." << std::endl;
        } 
        else if (command == "EXIT")
        {
            std::cout << "Bye Bye" << std::endl;
            break;
        }
    }
    return 0;
}
