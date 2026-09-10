/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:34:06 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/10 12:29:21 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/contact.hpp"

contact::contact()
{
    _exist = 0;
}

void    contact::set_one_info(int type)
{
    if (type != NUMBER)
    {
        while (1)
        {
            std::getline(std::cin, info[type]);
            if (!info[type].empty())
                
        }
    }
}

void    contact::set_info(int i)
{
    _index = i + 1;
    _exist = 1;
    std::cout << "please enter first name : ";
    std::getline(std::cin, info[FIRST_NAME]);
    std::cout << "please enter last name : ";
    std::getline(std::cin, info[LAST_NAME]);
    std::cout << "please enter nickname : ";
    std::getline(std::cin, info[NICKNAME]);
    std::cout << "please enter phone number : ";
    std::getline(std::cin, info[NUMBER]);
    std::cout << "please enter darkest secret : ";
    std::getline(std::cin, info[SECRET]);
}

bool contact::exist()
{
    return (_exist);
}

void contact::display_info(int i)
{
    if (i == 0)
    {
        std::cout << "|         " << _index << "|";
        for (int i = 0; i < NUMBER; i++)
        {
            if (info[i].length() > 9)
                std::cout << info[i].substr(0, 9) << ".";
            else
                std::cout << std::setw(10) << info[i];
            std::cout << "|";
        }
        std::cout << std::endl;
    }
    else if (i == 1)
    {
        std::cout << "CONTACT INFO :" << std::endl;
        std::cout << "First name = " << info[FIRST_NAME] << std::endl;
        std::cout << "Last name = " << info[LAST_NAME] << std::endl;
        std::cout << "Nickname = " << info[NICKNAME] << std::endl;
        std::cout << "Phone number = " << info[NUMBER] << std::endl;
        std::cout << "Darkest ecret = " << info[SECRET] << std::endl;
    }
}
