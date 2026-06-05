#include "../include/contact.hpp"

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

void contact::display_info()
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

void   contact::display_info_debug()
{
    std::cout << "first name = " << info[FIRST_NAME] << std::endl;
    std::cout << "last name = " << info[LAST_NAME] << std::endl;
    std::cout << "nickname = " << info[NICKNAME] << std::endl;
    std::cout << "number = " << info[NUMBER] << std::endl;
    std::cout << "darkest secret =  = " << info[SECRET] << std::endl;
}