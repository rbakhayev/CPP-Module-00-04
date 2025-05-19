/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:22:26 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:22:27 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
            std::string type;

    public:
            WrongAnimal();
            WrongAnimal(const WrongAnimal &other);
            WrongAnimal &operator=(const WrongAnimal &other);
            virtual ~WrongAnimal();

            void makeSound() const;
            std::string getType() const;
};

#endif
