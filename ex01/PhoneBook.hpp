#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include <iostream>

class PhoneBook
{
    public:
        std::string list[7];
};

class Contact
{
    private:
        std::string f_name;
        std::string l_name;
        std::string nickname;
        std::string password;
        int         phone_num;
};

#endif