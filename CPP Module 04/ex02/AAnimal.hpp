/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:21:17 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:21:19 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected:
            std::string type;

    public:
            AAnimal();
            AAnimal(const AAnimal &other);
            AAnimal &operator=(const AAnimal &other);
            virtual ~AAnimal();

            virtual void makeSound() const = 0;
            std::string getType() const;
};

#endif
