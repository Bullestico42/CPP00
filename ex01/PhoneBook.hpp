#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP 

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact list[7];
        int     index;
};

# endif