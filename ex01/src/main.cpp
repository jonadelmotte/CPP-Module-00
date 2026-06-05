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