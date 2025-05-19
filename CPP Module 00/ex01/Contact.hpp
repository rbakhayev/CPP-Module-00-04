/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:26:13 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/03/29 10:26:14 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <sstream> 

class Contact
{
        private:
                std::string firstName;
                std::string lastName;
                std::string nickname;
                std::string phoneNumber;
                std::string darkestSecret;

        public:
                Contact();

                void setFirstName(std::string firstName);
                void setLastName(std::string lastName);
                void setNickname(std::string nickname);
                void setPhoneNumber(std::string phoneNumber);
                void setDarkestSecret(std::string darkestSecret);

                std::string getFirstName();
                std::string getLastName();
                std::string getNickname();
                std::string getPhoneNumber();
                std::string getDarkestSecret();
};

#endif
