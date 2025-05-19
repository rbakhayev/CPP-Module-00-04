/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:16:07 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:16:10 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
	        Brain *brain;
    public:
            Cat();
            Cat(const Cat &other);
            Cat &operator=(const Cat &other);
            ~Cat();

            void makeSound() const;
};

#endif
