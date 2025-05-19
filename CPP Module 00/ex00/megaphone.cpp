/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 10:25:40 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/03/29 10:25:43 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int argc, char **argv)
{
    if (argc > 1)
    {
        int j = 1;
        while (argv[j]) 
        {
            int i = 0;
            while (argv[j][i]) 
            {
                std::cout << (char)std::toupper(argv[j][i]);
                i++;
            }
            j++;
        }
        std::cout << std::endl;
    } 
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return 0;
}
