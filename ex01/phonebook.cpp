#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <iomanip>

PhoneBook::PhoneBook() : _index(0), _oldest(0) {}

void    PhoneBook::AddContact()
{
    if (!_list[_oldest].setContact())
        return ;
    _oldest = (_oldest + 1) % 8;
    if (_index < 8)
        ++_index;
}

void    Contact::displayContact() const
{
    std::cout << "first name: " << _FirstName << std::endl
              << "last name: " << _LastName << std::endl
              << "nickname: " << _LastName << std::endl
              << "phone number: " << _PhoneNumber << std::endl;
}

std::string createString(std::string str)
{
    std::string res;
    int length = str.length();

    for (int i = 0; i < length; i++)
    {
        if (i > 8 && length > 10)
        {
            res += '.';
            break ;
        }
        res += str[i];
    }
    return res;
}

void    Contact::displayList(int index) const
{
    std::cout << std::setw(10) << (index + 1) << "|"
    << std::setw(10) << createString(_FirstName) << "|"
    << std::setw(10) << createString(_LastName) << "|"
    << std::setw(10) << createString(_NickName) << "|" << std::endl;
}

void    PhoneBook::SearchContact() const
{
    std::string indexArg;
    std::string arg;
    int         i = 0;
    int         index = 0;

    if (_index == 0)
    {
        std::cout << "PhoneBook is empty, add a new contact." << std::endl;
        return ;
    }
    std::cout << std::setw(10) << "INDEX" << "|"
        << std::setw(10) << "FIRST NAME" << "|" 
        << std::setw(10) << "LAST NAME" << "|"
        << std::setw(10) << "NICKNAME" << "|" << std::endl;
    while (i < _index)
    {
        _list[i].displayList(i);
        i++;
    }
    std::cout << "Search a contact with her index: " << std::endl;
    if (!std::getline(std::cin, indexArg)) return ;
    if (indexArg.size() == 0 || !isdigit(indexArg[0]))
    {
        std::cout << "Wrong index" << std::endl;
        return ;
    }
    index = indexArg[0] - '0';
    if (index > 8 || index == 0)
    {
        std::cout << "Wrong index, the number cannot be superior at 8 or inferior to 1" << std::endl;
        return ;
    }
    _list[index - 1].displayContact();
}