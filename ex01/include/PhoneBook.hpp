/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:34:03 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/10 11:52:26 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>

#include "contact.hpp"
#include "stoi.hpp"

class PhoneBook
{
private :
    contact _contacts[8];

public :
    int index;

    void add_contact();
    void display_contacts();
    void srch_contact();
} ;

#endif