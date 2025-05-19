/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:13:50 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:13:53 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <fstream>

bool Replace::replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        return false;
    }

    std::ofstream outputFile((filename + ".replace").c_str());
    if (!outputFile.is_open())
    {
        inputFile.close();
        return false;
    }

    std::string line;
    std::string modifiedLine;
    while (std::getline(inputFile, line))
    {
        size_t startPos = 0;
        size_t foundPos = line.find(s1, startPos);
        while (foundPos < line.length())
        {
            modifiedLine += line.substr(startPos, foundPos - startPos);
            modifiedLine += s2;
            startPos = foundPos + s1.length();
            foundPos = line.find(s1, startPos);
        }
        modifiedLine += line.substr(startPos);
        outputFile << modifiedLine << std::endl;
        modifiedLine.clear();
    }

    inputFile.close();
    outputFile.close();
    return true;
}
