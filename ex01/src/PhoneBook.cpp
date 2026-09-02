/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:34:12 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/02 13:45:16 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

void PhoneBook::add_contact()
{
    _contacts[index].set_info(index);
    if (index < 7)
        index++;
    else
        index = 0;
}

void    PhoneBook::srch_contact()
{
    bool i;
    int num;
    std::string get;

    i = 1;
    if (!_contacts[0].exist())
    {
        std::cout << "you don't have any contact\nplease creat at least one contact to use this option" << std::endl;
        return ;
    }
    while (i)
    {
        std::cout << "Wich contact (index) would you like to display ?" << std::endl;
        std::getline(std::cin, get);
        num = std::atoi(get.c_str());
        if (num > 8 || num < 1)
            std::cout << "not a valid index" << std::endl;
        else if (!_contacts[num - 1].exist())
            std::cout << "this contact does not exist yet" << std::endl;
        else
        {
            std::cout << "|-------------------------------------------|" << std::endl;
	        std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	        std::cout << "|----------|----------|----------|----------|" << std::endl;
            _contacts[num - 1].display_info();
	        std::cout << "|-------------------------------------------|" << std::endl;
            i = 0;
        }
    }
}
