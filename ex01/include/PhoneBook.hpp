#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>

#include "contact.hpp"

class PhoneBook
{
private :
    contact _contacts[8];

public :
    int index;
    
    void add_contact();
    void srch_contact();
} ;

#endif