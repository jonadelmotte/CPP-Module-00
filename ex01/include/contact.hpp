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
    bool _exist = 0;

public :
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
    void   display_info_debug();
    bool    exist();
} ;

#endif