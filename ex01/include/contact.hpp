/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:33:59 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/09 11:23:04 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

class contact
{
private :
    int _index;
    bool _exist;

public :
    contact();
    
    enum info 
    {
        FIRST_NAME = 0,
        LAST_NAME,
        NICKNAME,
        NUMBER,
        SECRET
    } ;
    std::string info[5];

    void    set_info(int i);
    void    display_info();
    void    display_info_debug();
    bool    exist();
} ;

#endif