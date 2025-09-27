#ifndef CONTACT_HPP
# define CONTACT_HPP 

#include <iostream>

class Contact
{
    private:
        std::string	_FirstName;
        std::string	_LastName;
        std::string _NickName;
        std::string	_DarkestSecret;
        std::string _PhoneNumber;
    public:
    	Contact();
		~Contact();
		Contact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret);
        std::string     getFirstName();
        void            setFirstName(std::string FirstNameTemp);
        std::string     getLastName();
        void            setLastName(std::string LastNameTemp);
        std::string     getNickName();
        void            setNickName(std::string NickNameTemp);
        std::string     getDarkestSecret();
        void            setDarkestSecret(std::string DarkestSecretTemp);
        std::string     getPhoneNumber();
        void            setPhoneNumber(std::string PhoneNumberTemp);
        bool            setContact();
        void            displayContact() const;
        void            displayList(int index) const;
};

# endif