/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbakhaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:13:56 by rbakhaye          #+#    #+#             */
/*   Updated: 2024/04/02 12:13:58 by rbakhaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <string>
# include <iostream>

class Replace
{
    public:
            bool replaceInFile(const std::string &filename, const std::string &s1, const std::string &s2);
};

#endif
