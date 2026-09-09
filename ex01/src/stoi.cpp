/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stoi.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 11:25:16 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/09 11:26:04 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"


static int stoi(const std::string & s) 
{
    int i = 0;
    std::istringstream(s) >> i;
    return i;
}
