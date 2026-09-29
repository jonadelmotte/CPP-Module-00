/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 13:33:59 by jdelmott          #+#    #+#             */
/*   Updated: 2026/09/29 12:00:21 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <cstdlib>
#include "utils.hpp"

class contact
{
private :
    int _index;
    bool _exist;
    std::string _types[6];

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
    void    set_one_info(int type);
    void    display_info(int i);
    bool    exist();
} ;

#endif