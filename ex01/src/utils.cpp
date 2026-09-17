/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:25:16 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/17 10:52:06 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/utils.hpp"

int stoi(const std::string & s) 
{
    int i = 0;
    std::istringstream(s) >> i;
    return i;
}

bool is_num(const std::string s)
{
    int i;

    i = 0;
    while (s[i])
    {
        if (isdigit((int)s[i]) == 0 && s[i] != ' ')
            return (1);
        i++;
    }
    return (0);
}