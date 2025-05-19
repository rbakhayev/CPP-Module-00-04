/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:11:10 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:11:12 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
            std::string type;

    public:
            Animal();
            Animal(const Animal &other);
            Animal &operator=(const Animal &other);
            virtual ~Animal();

            virtual void makeSound() const;
            std::string getType() const;
};

#endif
