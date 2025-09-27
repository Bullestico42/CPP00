#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP 
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact _list[8];
        int     _index;
        int     _oldest;
    public:
                PhoneBook();
        void    AddContact();
        void    SearchContact() const;
};

# endif