/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:34:09 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/02 13:34:10 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int main()
{
    PhoneBook PhoneBook;
    std::string cmd;

    PhoneBook.index = 0;
    while (1)
    {
        std::getline(std::cin, cmd);
        if (cmd == "EXIT")
            break ;
        else if (cmd == "ADD")
            PhoneBook.add_contact();
        else if (cmd == "SEARCH")
            PhoneBook.srch_contact();
    }
    return 0;
}