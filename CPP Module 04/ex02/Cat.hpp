/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 13:21:49 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/03 13:21:50 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
