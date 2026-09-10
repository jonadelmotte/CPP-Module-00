/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:34:12 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/10 12:23:23 by jdelmott         ###   ########.fr       */
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

void    PhoneBook::display_contacts()
{
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|              CONTATCS LIST :              |" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int y = 0; _contacts[y].exist() && y < 8; y++)
    {
        _contacts[y].display_info(0);
        if (_contacts[y + 1].exist() && y < 7)
            std::cout << "|----------|----------|----------|----------|" << std::endl;
    }        
    std::cout << "|-------------------------------------------|" << std::endl;

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
    display_contacts();
    while (i)
    {
        std::cout << "Wich contact (index) would you like to display ?" << std::endl;
        std::getline(std::cin, get);
        num = stoi(get.c_str());
        if (num > 8 || num < 1)
            std::cout << "not a valid index" << std::endl;
        else if (!_contacts[num - 1].exist())
            std::cout << "this contact does not exist yet" << std::endl;
        else
        {
            _contacts[num - 1].display_info(1);
            i = 0;
        }
    }
}

