/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:13:37 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:13:39 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    Replace replace;
    if (!replace.replaceInFile(filename, s1, s2))
    {
        std::cerr << "Error: Failed to replace \"" << s1 << "\" with \"" << s2 << "\" in file \"" << filename << "\"" << std::endl;
        return 1;
    }

    std::cout << "Replacement successful. Check file: " << filename << ".replace" << std::endl;
    return 0;
}
