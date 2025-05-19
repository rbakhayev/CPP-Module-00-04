/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:11:42 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:11:43 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
            Dog();
            Dog(const Dog &other);
            Dog &operator=(const Dog &other);
            ~Dog();

            void makeSound() const;
};

#endif
